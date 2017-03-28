// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "OnlineSubsystemUtils.h"

#include "VoiceDataCommon.h"
#include "Sound/SoundWaveProcedural.h"
#include "VoicePacketImpl.h"

#include "VoiceSource.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MASTER_PROJECT_API UVoiceSource : public UActorComponent
{
	GENERATED_BODY()

	IOnlineVoicePtr m_voice;

	TSharedPtr<FVoicePacket> m_voicePacket;

	FTimerHandle m_timerHandle;
	FTimerHandle m_timerFrequency;

	FArchive m_freqArchive;

	TMap<FString, USoundWaveProcedural*> m_soundWaves;

public:	
	// Sets default values for this component's properties
	UVoiceSource();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voice Chat")
		USoundWave* GetPlayerSound(int id);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voice Chat")
		float GetSoundDuration(USoundWave* wav);

	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;
};
