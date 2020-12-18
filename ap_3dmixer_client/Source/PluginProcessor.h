/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "APInterprocessConnection.h"
#include "parameters.pb.h"

//==============================================================================
/**
*/
class Ap_3dmixer_clientAudioProcessor  : public juce::AudioProcessor,
                                         public juce::ValueTree::Listener
{
public:
    //==============================================================================
    Ap_3dmixer_clientAudioProcessor();
    ~Ap_3dmixer_clientAudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;

    //==============================================================================
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    //==Public Methods==============================================================
    // Gives initial values to DSP - Calls: 1
    void init();
    // Passes the sample rate and buffer size to DSP
    void prepare (double sampleRate, int samplesPerBlock);
    // Updates DSP when user changes parameters
    void update();
    // Overrides AudioProcessor reset, reset DSP parameters
    void reset() override;
    // Create parameter layout for apvts
    juce::AudioProcessorValueTreeState::ParameterLayout createParameters();

    //==Public Members==============================================================
    juce::AudioProcessorValueTreeState apvts;

private:
    //==Private Members=============================================================
    bool isActive_ { false };
    bool mustUpdateProcessing_ { false };
    juce::LinearSmoothedValue<float> gain_ [2] { 0.0f };
    juce::IIRFilter iirFilter_ [2];

    std::unique_ptr<Ap_InterprocessConnection> connection_;

    //==Private Methods=============================================================
    // Callback for DSP parameter changes
    void valueTreePropertyChanged (juce::ValueTree& treeWhosePropertyChanged,
                                   const juce::Identifier& property) override;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Ap_3dmixer_clientAudioProcessor)
};
