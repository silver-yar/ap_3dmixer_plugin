/*
  ==============================================================================

    APInterprocessConnection.cpp
    Created: 27 Oct 2020 1:39:32am
    Author:  Johnathan Handy

  ==============================================================================
*/

#include "APInterprocessConnection.h"

//==============================================================================
Ap_InterprocessConnection::Ap_InterprocessConnection()
{
}

Ap_InterprocessConnection::~Ap_InterprocessConnection()
{
}

void Ap_InterprocessConnection::messageReceived (const juce::MemoryBlock& message)
{
    auto data64 = message.toString();
    juce::MemoryOutputStream outputStream;
    auto isBase64 = juce::Base64::convertFromBase64(outputStream, data64);
    jassert(isBase64);
    const float* convertedVal = static_cast<const float*>(outputStream.getData());
    if (isBase64) {
        DBG("Converted Value: " + juce::String(*convertedVal));
    } else {
        DBG("didn't work!");
    }
}