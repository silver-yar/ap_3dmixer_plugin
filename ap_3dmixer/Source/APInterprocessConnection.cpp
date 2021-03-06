/*
  ==============================================================================

    APInterprocessConnection.cpp
    Created: 27 Oct 2020 1:39:32am
    Author:  Johnathan Handy

  ==============================================================================
*/

#include "APInterprocessConnection.h"
#include "parameters.pb.h"

//==============================================================================
Ap_InterprocessConnection::Ap_InterprocessConnection()
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;
}

Ap_InterprocessConnection::~Ap_InterprocessConnection()
{
}

void Ap_InterprocessConnection::messageReceived (const juce::MemoryBlock& message)
{
    aproto::Parameters converted;
    std::string s(message.begin(), message.getSize());
    converted.ParseFromString(s);
    DBG(converted.parameters(0).name());
    DBG(converted.parameters(1).name());
    DBG(converted.parameters(0).value());
    DBG(converted.parameters(1).value());
}