// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MASTER_PROJECT_API VoiceIndicator
{
public:
	VoiceIndicator();
	~VoiceIndicator();

	
	/** What is the current microphone level? ! */
	UFUNCTION([BlueprintPure, BlueprintCallable], meta= (DisplayName="GetMicLevel", CompactNodeTitle="GetMicLevel", KeyWords="float micLevel"), Category = "MicrophoneDetection")
		static float GetMicLevel();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Hello World", CompactNodeTitle = "HelloWorld", Keywords = "String Hello World"), Category = Game)
		static FText HelloWorld();
};
