/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "APInterprocessConnection.h"
#include "parameters.pb.h"

//==============================================================================
Ap_3dmixer_clientAudioProcessorEditor::Ap_3dmixer_clientAudioProcessorEditor (Ap_3dmixer_clientAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
//    GOOGLE_PROTOBUF_VERIFY_VERSION;
//    Test Socket Connection Code
//    connection_ = std::make_unique<Ap_InterprocessConnection>();
//    connection_->connectToSocket ("127.0.0.1", 3450, 500);
//    juce::String message("Hello, Audio Pirate.");
//    connection_->sendMessage (juce::MemoryBlock (message.toUTF8(), message.length()));

    // Gain Slider Setup
    lpfSlider_ = std::make_unique<juce::Slider> (juce::Slider::SliderStyle::LinearBarVertical, juce::Slider::TextBoxBelow);
    addAndMakeVisible (lpfSlider_.get());
    lpfLabel_ = std::make_unique<juce::Label> ("", "LPF");
    addAndMakeVisible (lpfLabel_.get());
    lpfLabel_->attachToComponent (lpfSlider_.get(), false);
    lpfLabel_->setJustificationType (juce::Justification::centred);
    lpfAttachment_ = std::make_unique<juce::AudioProcessorValueTreeState::SliderAttachment> (
            audioProcessor.apvts, "LPF", *lpfSlider_);

    // Gain Slider Setup
    gainSlider_ = std::make_unique<juce::Slider> (juce::Slider::SliderStyle::LinearBarVertical, juce::Slider::TextBoxBelow);
    addAndMakeVisible (gainSlider_.get());
    gainLabel_ = std::make_unique<juce::Label> ("", "Volume");
    addAndMakeVisible (gainLabel_.get());
    gainLabel_->attachToComponent (gainSlider_.get(), false);
    gainLabel_->setJustificationType (juce::Justification::centred);
    gainAttachment_ = std::make_unique<juce::AudioProcessorValueTreeState::SliderAttachment> (audioProcessor.apvts, "VOL", *gainSlider_);

    startTimerHz (10);

    setSize (200, 400);
}

Ap_3dmixer_clientAudioProcessorEditor::~Ap_3dmixer_clientAudioProcessorEditor()
{
    stopTimer();
}

//==============================================================================
void Ap_3dmixer_clientAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    auto bounds = getLocalBounds();
    auto textBounds = bounds.removeFromTop((float) getHeight() * 0.2f);

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Client", textBounds, juce::Justification::centred, 1);
}

void Ap_3dmixer_clientAudioProcessorEditor::resized()
{
    auto bounds = getLocalBounds();
    bounds.removeFromTop((float) getHeight() * 0.2f);
    auto left = bounds.removeFromLeft((float) getWidth() * 0.5f);

    lpfSlider_->setBounds(left);
    gainSlider_->setBounds(bounds);
}

void Ap_3dmixer_clientAudioProcessorEditor::timerCallback()
{
//    aproto::Parameters parameters;
//    aproto::Parameter* parameter = parameters.add_parameters();
//    parameter->set_name("VOL");
//    float currVal = audioProcessor.apvts.getRawParameterValue("VOL") -> load();
//    parameter->set_value(currVal);
//
//    std::string output;
//    parameter->SerializeToString(&output);
//    juce::MemoryBlock message (output.data(), output.size());
//
//    connection_->sendMessage(message);
}
