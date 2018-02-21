// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Voice.h"
#include "OnlineSubsystem.h"
#include "Sound/SoundWaveProcedural.h"

#include "MyBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class MASTER_PROJECT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	UMyBlueprintFunctionLibrary();
	GENERATED_BODY()

		/** What is the current microphone level? ! */
	UFUNCTION(BlueprintPure, BlueprintCallable, meta = (DisplayName = "Get Mic Level", CompactNodeTitle = "GetMicLevel", KeyWords = "float micLevel"), Category = "MicrophoneDetection")
		float GetMicLevel();


		TSharedPtr<class IVoiceCapture> VoiceCapture;

	UPROPERTY()
		USoundWaveProcedural* VoiceCaptureSoundWaveProcedural;
	UPROPERTY()
		UAudioComponent* VoiceCaptureAudioComponent;

	UPROPERTY()
		TArray<uint8> VoiceCaptureBuffer;
};
