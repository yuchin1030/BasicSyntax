#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShootingPlayer.generated.h"

UCLASS()
class KDTSHOOTING_API AShootingPlayer : public APawn
{
	GENERATED_BODY()

public:
	AShootingPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 충돌체 컴포넌트 변수
	UPROPERTY(VisibleAnywhere, Category = "MySettings")		// 변수 에디터상에 추가
	class UBoxComponent* boxComp;	// UBoxComponent 클래스에 접근	// 접두어 U를 붙여서 검색해야 C++ 검색됨(안 붙이면 블루프린트가 검색됨)

	// 스태틱 메시 컴포넌트 변수
	UPROPERTY(VisibleAnywhere, Category = "MySettings")
	class UStaticMeshComponent* meshComp;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	float speed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	FVector2D inputDir;

private:
	UFUNCTION(BlueprintCallable)
	void Move(FVector direction, float deltaTime);









	// ------------------------------------------------------------------------------------------------------------------------------

	/* 
	* 변수
	리플렉션 기능
	// UPROPERTY 매크로 함수(메타 지정자; metal specifier, ...)	// UPROPERTY : 에디터에서 쓸 수 있게 하기 위함
	// UPROPERTY는 밑에 있는 변수 하나에만 적용됨
	// Edit : 수정하겠다, Visible : 보기만 하겠다

	// 블루프린트에서 변수 사용 가능하게 하려면
	  -> 빌드하고 MyBlueprint 탭에서 설정 - Show Inherited Variables 체크 -> Variables 목록에 보임
	BlueprintReadWrite : get(읽기), set(수정) 둘 다 가능
	BlueprintReadOnly : get(읽기)만 가능

	Category = "My Settings" : 카테고리 지정해주면 그 카테고리에 변수가 생성됨 (default  : 현재 클래스 이름에 들어감)
	*/
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Settings")		// **EditAnywhere : 인스턴스, 설정창(Default)에서 모두 보이고 값 수정 가능 (인스턴스 : 레벨의 Outliner의 Details창, 설정창 : 블루프린트 Details창)
	int32 age1;										

	UPROPERTY(EditAnywhere, BlueprintReadOnly)		// **EditDefaultsOnly : 설정창에서만 보이고 값 수정 가능
	float numberFloat = 3.14f;

	UPROPERTY(EditAnywhere)		// **VisibleAnywhere : 인스턴스, 설정창에서 모두 보이지만 둘다 값 수정 불가능
	FString name = TEXT("심유진");

	UPROPERTY(EditAnywhere)		// **VisibleDefaultsOnly : 설정창에서만 보이고 값 수정 불가능
	bool bIsTeacher = true;		// 변수 이름만 보고 bool 변수인지 알기 위해 b를 붙임. 에디터에서는 b가 안보임.


	//UPROPERTY(EditAnywhere)		
	




	/*
	* 함수
	// 리플렉션 기능
	// UFUNCTION 매크로 함수(메타 지정자; metal specifier, ...)	// UFUNCTION : 에디터에서 쓸 수 있게 하기 위함
	// 반환자료형 함수이름(매개변수1, 매개변수2, ...) 
	// 블루프린트에서 Call Function 하면 내가 정의한 함수 사용 가능

	BlueprintCallable : 실행 핀이 있음
	BlueprintPure : get같은 것
	*/

	//UFUNCTION(BlueprintCallable)
	//int32 Add(int32 num1, int32 num2);		// 선언만 하고 Alt + Enter -> 정의 만들기 누르면 cpp에 자동으로 함수 정의가 생김

	UFUNCTION(BlueprintCallable)
	int32 Multiply(int32 num1, int32 num2);

	UFUNCTION(BlueprintPure)
	float GetNumberFloat();




	// 1부터 입력받은 값까지를 출력하는 함수를 선언하세요.
	UFUNCTION(BlueprintCallable)
	void PrintInputNumber(int32 targetNum);




	void PrintSquare(int32* originNumber);

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class APointerTestActor* MyTestActor;	// 클래스로 된 값을 받으려면 포인터변수(참조형태)로 받는다. 외워두기.		컴파일러는 얘가 무슨 변수인지 모르기 때문에 "이건 클래스야" 전방선언해줌

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class AActor* myActor;
	
};
