// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSFunctionLibrary.h"


TArray<FVector> UTPSFunctionLibrary::CalculateThrowPoints(AActor* baseActor, const FVector& dir, float power, float interval, float simulTime, float gravityZ)
{
	TArray<FVector> simulPoints;

	// �� Ƚ�� = �ùķ��̼� �� �ð� / �ùķ��̼� ����
	int32 segment = simulTime / interval;
	FVector startLocation = baseActor->GetActorLocation() + baseActor->GetActorForwardVector() * 100;
	FVector gravityValue = FVector(0, 0, gravityZ);
	float mass = 1;

	for (int32 i = 0; i < segment; i++)
	{
		// p = p0 + vt - 0.5*g*t*t * mass * mass
		float term = interval * i;
		FVector predictLocation = startLocation + dir * power * term + 0.5f * gravityValue * term * term * mass * mass;
		simulPoints.Add(predictLocation);
	}

	return simulPoints;
}

// �þ߰� üũ
float UTPSFunctionLibrary::CheckSight(const AActor* myActor, const AActor* otherActor)
{
	FVector forwardVec = myActor->GetActorForwardVector();
	FVector directionVec = (otherActor->GetActorLocation() - myActor->GetActorLocation()).GetSafeNormal();

	float cosTheta = FVector::DotProduct(forwardVec, directionVec);
	float theta_radian = FMath::Acos(cosTheta);
	float theta_degree = FMath::RadiansToDegrees(theta_radian);
	
	return theta_degree;
}

// �ֺ� ���� �˻�
TArray<AActor*> UTPSFunctionLibrary::SearchAroundActor(const AActor* myActor, float sightDistance, ECollisionChannel searchObject, UWorld* worldContext)
{
	TArray<AActor*> otherActors;

	TArray<FOverlapResult> hitInfos;
	FCollisionObjectQueryParams objectParams;
	objectParams.AddObjectTypesToQuery(searchObject);
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(myActor);

	bool bCheckResult = worldContext->OverlapMultiByObjectType(hitInfos, myActor->GetActorLocation(), FQuat::Identity, objectParams, FCollisionShape::MakeSphere(sightDistance), queryParams);

	// �������� �����͸��� ���� ���鼭...
	for (const FOverlapResult& hitInfo : hitInfos)
	{
		// �������� ���͸� otherActors �迭�� �߰��Ѵ�.
		otherActors.Add(hitInfo.GetActor());
	}

	return otherActors;
}
