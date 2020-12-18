/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Ap_3dmixer_clientAudioProcessor::Ap_3dmixer_clientAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  getTotalNumInputChannels() > 1 ?
                                              juce::AudioChannelSet::stereo() : juce::AudioChannelSet::mono(), true)
                      #endif
                       .withOutput ("Output", juce::AudioChannelSet::stereo(), true)
                     #endif
                       ), apvts (*this, nullptr, "Parameters", createParameters())
#endif
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    apvts.state.addListener (this);
    init();
}

Ap_3dmixer_clientAudioProcessor::~Ap_3dmixer_clientAudioProcessor()
{
}

//==============================================================================
const juce::String Ap_3dmixer_clientAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool Ap_3dmixer_clientAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool Ap_3dmixer_clientAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool Ap_3dmixer_clientAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double Ap_3dmixer_clientAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int Ap_3dmixer_clientAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int Ap_3dmixer_clientAudioProcessor::getCurrentProgram()
{
    return 0;
}

void Ap_3dmixer_clientAudioProcessor::setCurrentProgram (int index)
{
}

const juce::String Ap_3dmixer_clientAudioProcessor::getProgramName (int index)
{
    return {};
}

void Ap_3dmixer_clientAudioProcessor::changeProgramName (int index, const juce::String& newName)
{
}

//==============================================================================
void Ap_3dmixer_clientAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    prepare (sampleRate, samplesPerBlock);
    update();
    reset();
    isActive_ = true;
}

void Ap_3dmixer_clientAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool Ap_3dmixer_clientAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    juce::ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void Ap_3dmixer_clientAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    if (!isActive_) return;

    if (mustUpdateProcessing_) update();

    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();
    auto numSamples = buffer.getNumSamples();

    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear (i, 0, buffer.getNumSamples());

    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        auto* channelData = buffer.getWritePointer (channel);
        iirFilter_[channel].processSamples (channelData, numSamples);
        gain_[channel].applyGain (channelData, numSamples);

        // Iterate over each sample in the buffer
        for (int sample = 0; sample < numSamples; ++sample)
        {
            // Hard Clipper: Ensures that each sample stays between the values of -1 and 1
            channelData[sample] = juce::jlimit (-1.0f, 1.0f, channelData[sample]);
        }
    }
}

//==============================================================================
bool Ap_3dmixer_clientAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

juce::AudioProcessorEditor* Ap_3dmixer_clientAudioProcessor::createEditor()
{
    return new Ap_3dmixer_clientAudioProcessorEditor (*this);
}

//==============================================================================
void Ap_3dmixer_clientAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // Save state information to xml -> binary to retrieve on startup
    juce::ValueTree copyState = apvts.copyState();
    std::unique_ptr<juce::XmlElement> xml = copyState.createXml();
    copyXmlToBinary (*xml, destData);
}

void Ap_3dmixer_clientAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    std::unique_ptr<juce::XmlElement> xml = getXmlFromBinary (data, sizeInBytes);
    juce::ValueTree copyState = juce::ValueTree::fromXml (*xml);
    apvts.replaceState (copyState);
}

void Ap_3dmixer_clientAudioProcessor::init() {
    // Test Socket Connection Code
    connection_ = std::make_unique<Ap_InterprocessConnection>();
    connection_->connectToSocket ("127.0.0.1", 3450, 500);
}

void Ap_3dmixer_clientAudioProcessor::prepare(double sampleRate, int samplesPerBlock) {

}

void Ap_3dmixer_clientAudioProcessor::update() {
    mustUpdateProcessing_ = false;

    auto volume = apvts.getRawParameterValue ("VOL");
    auto frequency = apvts.getRawParameterValue ("LPF");

    for (int channel = 0; channel < 2; ++channel) {
        iirFilter_[channel].setCoefficients (juce::IIRCoefficients::makeLowPass (
                getSampleRate(), frequency->load()));
        gain_[channel].setTargetValue(juce::Decibels::decibelsToGain(volume->load()));
    }
}

void Ap_3dmixer_clientAudioProcessor::reset() {
    for (int channel = 0; channel < 2; ++channel) {
        iirFilter_[channel].reset();
        gain_[channel].reset(getSampleRate(), 0.050);
    }
}

juce::AudioProcessorValueTreeState::ParameterLayout Ap_3dmixer_clientAudioProcessor::createParameters() {
    // Create parameter layout for apvts
    std::vector<std::unique_ptr<juce::RangedAudioParameter>> parameters;

    auto valueToTextFunction = [](float val, int len) { return juce::String(val, len); };
    auto textToValueFunction = [](const juce::String& text) { return text.getFloatValue(); };

    // **Low Pass Filter Parameter** - in Hz
    parameters.emplace_back (std::make_unique<juce::AudioParameterFloat>(
            "LPF",
            "Low Pass Filter",
            juce::NormalisableRange<float>(20.0f, 20000.0f, 10.0f, 0.2f),
            800.0f,
            "Hz",
            juce::AudioProcessorParameter::genericParameter,
            valueToTextFunction,
            textToValueFunction
    ));

    // **Gain Parameter** - in dB
    parameters.emplace_back (std::make_unique<juce::AudioParameterFloat>(
            "VOL",
            "Volume",
            juce::NormalisableRange<float>(-40.0f, 40.0f),
            0.0f,
            "dB",
            juce::AudioProcessorParameter::genericParameter,
            valueToTextFunction,
            textToValueFunction
    ));

    return { parameters.begin(), parameters.end() };
}

void Ap_3dmixer_clientAudioProcessor::valueTreePropertyChanged (juce::ValueTree& treeWhosePropertyChanged, const juce::Identifier& property)
{
    mustUpdateProcessing_ = true;
    aproto::Parameters parameters;

    aproto::Parameter* lpf = parameters.mutable_parameter1();
    lpf->set_name("LPF");
    lpf->set_value(apvts.getRawParameterValue("LPF") -> load());
//    DBG(apvts.getRawParameterValue("LPF")->load());
    
    aproto::Parameter* volume = parameters.mutable_parameter2();
    volume->set_name("VOL");
    volume->set_value(apvts.getRawParameterValue("VOL") -> load());
//    DBG(parameters.parameters_size());
    std::string output;
//    char* data;
//    parameters.SerializeToArray(data, sizeof(data));
    parameters.SerializeToString(&output);
    juce::MemoryBlock message (output.data(), output.size());
//    juce::MemoryBlock message (data, sizeof(data));

    aproto::Parameters converted;
    std::string s(message.begin(), message.getSize());
    converted.ParseFromString(s);
//    converted.ParseFromString(message.toString().toStdString());

//    connection_->sendMessage(message);
};

//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new Ap_3dmixer_clientAudioProcessor();
}
