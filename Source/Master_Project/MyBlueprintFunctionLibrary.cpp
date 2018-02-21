// Fill out your copyright notice in the Description page of Project Settings.

#include "Master_Project.h"
#include "MyBlueprintFunctionLibrary.h"

UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary() {
	VoiceCapture = FVoiceModule::Get().CreateVoiceCapture();
	VoiceCapture->Start();

	/*VoiceCaptureAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("VoiceCaptureAudioComponent"));
	VoiceCaptureAudioComponent->bAutoActivate = true;
	VoiceCaptureAudioComponent->bAlwaysPlay = true;
	VoiceCaptureAudioComponent->PitchMultiplier = 0.85f;
	VoiceCaptureAudioComponent->VolumeMultiplier = 5.f;

	VoiceCaptureSoundWaveProcedural = NewObject<USoundWaveProcedural>();
	VoiceCaptureSoundWaveProcedural->SampleRate = 22050;
	VoiceCaptureSoundWaveProcedural->NumChannels = 1;
	VoiceCaptureSoundWaveProcedural->Duration = INDEFINITELY_LOOPING_DURATION;
	VoiceCaptureSoundWaveProcedural->SoundGroup = SOUNDGROUP_Voice;
	VoiceCaptureSoundWaveProcedural->bLooping = false;
	VoiceCaptureSoundWaveProcedural->bProcedural = true;
	VoiceCaptureSoundWaveProcedural->Pitch = 0.85f;
	VoiceCaptureSoundWaveProcedural->Volume = 5.0f;*/
}




float UMyBlueprintFunctionLibrary::GetMicLevel() {
	float VoiceCaptureFinalVolume = 0.0f;

	if (!VoiceCapture.IsValid())
		return VoiceCaptureFinalVolume;

	uint32 VoiceCaptureBytesAvailable = 0;
	EVoiceCaptureState::Type CaptureState = VoiceCapture->GetCaptureState(VoiceCaptureBytesAvailable);
	VoiceCaptureBuffer.SetNumUninitialized(VoiceCaptureBytesAvailable);


	if (CaptureState == EVoiceCaptureState::Ok && VoiceCaptureBytesAvailable > 0)
	{
		int16_t VoiceCaptureSample;
		uint32 VoiceCaptureReadBytes;
		float VoiceCaptureTotalSquared = 0;


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