/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "APInterprocessConnection.h"
#include "parameters.pb.h"

//==============================================================================
/**
*/
class Ap_3dmixer_clientAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                               public juce::Timer
{
public:
    Ap_3dmixer_clientAudioProcessorEditor (Ap_3dmixer_clientAudioProcessor&);
    ~Ap_3dmixer_clientAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void timerCallback() override;

private:
    Ap_3dmixer_clientAudioProcessor& audioProcessor;

    std::unique_ptr<juce::Slider> lpfSlider_, gainSlider_;
    std::unique_ptr<juce::Label> lpfLabel_, gainLabel_;
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> lpfAttachment_,
    gainAttachment_;

    float preVal_ = 0;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Ap_3dmixer_clientAudioProcessorEditor)
};
