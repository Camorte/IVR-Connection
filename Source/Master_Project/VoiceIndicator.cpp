// Fill out your copyright notice in the Description page of Project Settings.

#include "Master_Project.h"
#include "VoiceIndicator.h"

VoiceIndicator::VoiceIndicator()
{
}

VoiceIndicator::~VoiceIndicator()
{
}


float VoiceIndicator::GetMicLevel() {
	return 0.0f;
}

FText VoiceIndicator::HelloWorld()
{
	return FText::FromString("Hello World");
}