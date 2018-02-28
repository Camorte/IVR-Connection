// Fill out your copyright notice in the Description page of Project Settings.

#include "Master_Project.h"
#include "MyBlueprintFunctionLibrary.h"


void UMyBlueprintFunctionLibrary::Initialize() {
	UE_LOG(LogTemp, Warning, TEXT("Voice capture initialized!"));
	VoiceCapture = FVoiceModule::Get().CreateVoiceCapture();
	VoiceCapture->Start();
}


float UMyBlueprintFunctionLibrary::GetMicLevel() {
	float VoiceCaptureFinalVolume = 0.0f;

	if (!VoiceCapture.IsValid())
		return VoiceCaptureFinalVolume;

	VoiceCaptureBuffer.Reset();

	uint32 VoiceCaptureBytesAvailable = 0;
	EVoiceCaptureState::Type CaptureState = VoiceCapture->GetCaptureState(VoiceCaptureBytesAvailable);


	if (CaptureState == EVoiceCaptureState::Ok && VoiceCaptureBytesAvailable > 0)
	{
		int16_t VoiceCaptureSample;
		uint32 VoiceCaptureReadBytes;
		float VoiceCaptureTotalSquared = 0;

		VoiceCaptureBuffer.SetNumUninitialized(VoiceCaptureBytesAvailable);

		VoiceCapture->GetVoiceData(VoiceCaptureBuffer.GetData(), VoiceCaptureBytesAvailable, VoiceCaptureReadBytes);

		for (uint32 i = 0; i < (VoiceCaptureReadBytes / 2); i++)
		{
			VoiceCaptureSample = (VoiceCaptureBuffer[i * 2 + 1] << 8) | VoiceCaptureBuffer[i * 2];
			VoiceCaptureTotalSquared += ((float)VoiceCaptureSample * (float)VoiceCaptureSample);
		}

		float VoiceCaptureMeanSquare = (2 * (VoiceCaptureTotalSquared / VoiceCaptureBuffer.Num()));
		float VoiceCaptureRms = FMath::Sqrt(VoiceCaptureMeanSquare);
		VoiceCaptureFinalVolume = ((VoiceCaptureRms / 32768.0) * 200.f);
	}

	return VoiceCaptureFinalVolume;
}