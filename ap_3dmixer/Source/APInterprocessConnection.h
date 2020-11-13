/*
  ==============================================================================

    APInterprocessConnection.h
    Created: 27 Oct 2020 1:39:32am
    Author:  Johnathan Handy

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class Ap_InterprocessConnection : public juce::InterprocessConnection
{
public:
    Ap_InterprocessConnection();
    ~Ap_InterprocessConnection();

    void connectionMade() override { DBG("Connection Made."); }
    void connectionLost() override { DBG("Connection Lost."); }
    void messageReceived (const juce::MemoryBlock& message) override;

    // Setters
    void setClientName(const juce::String& name) { name_ = name; }
    // Getters
    juce::String getClientName() { return name_; }
private:
    juce::String name_;
};