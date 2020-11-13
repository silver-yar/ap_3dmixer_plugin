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
    // Test Socket Connection Code
    connection_ = std::make_unique<Ap_InterprocessConnection>();
    connection_->connectToSocket ("127.0.0.1", 3450, 500);
    juce::String message("Hello, Audio Pirate.");
    connection_->sendMessage (juce::MemoryBlock (message.toUTF8(), message.length()));

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

    gainSlider_->setBounds(bounds);
}

void Ap_3dmixer_clientAudioProcessorEditor::timerCallback()
{
    float currVal = audioProcessor.apvts.getRawParameterValue("VOL") -> load();
    DBG("currVal: " + juce::String(currVal));
    auto currVal64 = juce::Base64::toBase64(&currVal, sizeof(currVal));
    DBG("currVal64: " + currVal64);

    connection_->sendMessage (juce::MemoryBlock (currVal64.toUTF8(), sizeof(currVal64.toUTF8())));

//    juce::MemoryOutputStream outputStream;
//    auto isBase64 = juce::Base64::convertFromBase64(outputStream, currVal64);
//    // jassert(isBase64);
//    const void* data = outputStream.getData();
//    const float* convertedVal = static_cast<const float*>(data);
//    if (isBase64) {
//        DBG("Converted: " + juce::String(*convertedVal));
//    } else {
//        DBG("didn't work!");
//    }
//    connection_->sendMessage (juce::MemoryBlock (currVal64.toUTF8(), currVal64.length()));
}
