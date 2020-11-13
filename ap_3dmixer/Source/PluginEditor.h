/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Ap_3dmixerAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                        public juce::InterprocessConnectionServer,
                                        public juce::Timer
{
public:
    Ap_3dmixerAudioProcessorEditor (Ap_3dmixerAudioProcessor&);
    ~Ap_3dmixerAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void timerCallback() override;
    
protected:
    juce::InterprocessConnection* createConnectionObject() override;

private:
    Ap_3dmixerAudioProcessor& audioProcessor;
    juce::OwnedArray<juce::InterprocessConnection> connections_;

    int numClients_ { 0 };

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Ap_3dmixerAudioProcessorEditor)
};
