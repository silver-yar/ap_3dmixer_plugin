/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "APInterprocessConnection.h"

//==============================================================================
Ap_3dmixerAudioProcessorEditor::Ap_3dmixerAudioProcessorEditor (Ap_3dmixerAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Start IPConnection Server
    beginWaitingForSocket (3450, "");
    startTimerHz(30);
    setSize (400, 300);
}

Ap_3dmixerAudioProcessorEditor::~Ap_3dmixerAudioProcessorEditor()
{
    stopTimer();
    stop();
}

//==============================================================================
void Ap_3dmixerAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    auto bounds = getLocalBounds();
    auto textBounds = bounds.removeFromTop(getHeight() * 0.1f);

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Host", textBounds, juce::Justification::centredTop, 1);

    for (auto i = 0; i < connections_.size(); ++i)
    {
        g.drawFittedText(juce::String(i), bounds.removeFromTop(i * getHeight() * 0.1f),
                         juce::Justification::top, 1);
    }
}

void Ap_3dmixerAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

void Ap_3dmixerAudioProcessorEditor::timerCallback()
{
    repaint();
}

juce::InterprocessConnection* Ap_3dmixerAudioProcessorEditor::createConnectionObject()
{
    auto connection = new Ap_InterprocessConnection();
    connections_.add (connection);
    return connection;
}
