#include "ShootingPlayer.h"
#include "PointerTestActor.h"
#include "Components/BoxComponent.h"	// 컴포넌트들은 Components파일 안에 있음. - 박스 컴포넌트 헤더파일
#include "Components/StaticMeshComponent.h"	//	- 스태틱메쉬 컴포넌트 헤더파일

using namespace std;

AShootingPlayer::AShootingPlayer()	// construction
{
	PrimaryActorTick.bCanEverTick = true;

	// 1. 박스 컴포넌트를 생성한다.
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));

	// 1-1. 생성된 박스 컴포넌트를 루트 컴포넌트로 설정한다.
	SetRootComponent(boxComp);

	// 1-2. 박스 컴포넌트의 크기를 50x50x50 으로 설정한다.
	boxComp->SetBoxExtent(FVector(50, 50, 50));

	// 2. 스태틱 메시 컴포넌트를 생성한다.
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	// 2-1. 생성된 메시 컴포넌트를 루트의 자식 컴포넌트로 설정한다.
	meshComp->SetupAttachment(boxComp);

	// 2-2. 메시 컴포넌트의 위치를 z축으로 -50만큼 내린다.
	meshComp->SetRelativeLocation(FVector(0,0,-50));
}

/*
* LifeCycle 함수
 BeginPlay()  태어날때
 Tick()		  살때
 EndPlay()	  죽었을때
*/ 

void AShootingPlayer::BeginPlay()	// start() - world에 처음 생성됐을때
{
	Super::BeginPlay();
	


























	// ---------------------------------------------------------------------------------------------------------------------------------

	//APointerTestActor* testPtr = NewObject<APointerTestActor>(this);	

	//MyTestActor->SetActorLocation(FVector(200, 200, 200));	// #include "PointerTestActor.h" 해줘야 빌드 성공 & 이 클래스임을 앎
	// 해당 클래스에 선언되어 있는 변수나 함수를 접근하여 사용가능(public인 경우에만)

	//UE_LOG(LogTemp, Log, TEXT("Hello World!"));	// 카테고리, 쓰는 목적(Message, Warning, Erros), 쓸 텍스트 
	//UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
	//UE_LOG(LogTemp, Error, TEXT("Hello World!"));

	//int number = 100;
	int32 number = 100;

	// 문자열 포맷(format)
	UE_LOG(LogTemp, Warning, TEXT("%d"), number);

	float number2 = -3.14f; 
	UE_LOG(LogTemp, Warning, TEXT("%f"), number2);

	//string myText = "Yuchin";
	// 전달받을 자료형 : FString (x), TCHAR* (o)
	// TChar letter = 'C';
	FString myText = TEXT("심유진");	// FString은 언리얼에서만 가능.		한국어로 하려면 파일 -> 다른이름으로 저장 -> 저장하기 전에 밑화살표 눌러서 UTF-8로 인코딩하여 저장 -> 빌드 꼭 해줘야 한국어 제대로 나옴

	UE_LOG(LogTemp, Warning, TEXT("%s"), *myText);	// 포인터랑 상관없음. 이건 연산자 오버로딩. 필수.

	bool bIsStudent = false;
	UE_LOG(LogTemp, Warning, TEXT("%d"), bIsStudent);

	if (bIsStudent == true) {
		UE_LOG(LogTemp, Warning, TEXT("My answer is True"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("My answer is False"));
	}




	//int32 result = Add(10, 5);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), result);

	// 포인터

	float* ptrFloat = &numberFloat;

	// %p : pointer의 주소값
	UE_LOG(LogTemp, Warning, TEXT("%p"), ptrFloat);		// 주소
	UE_LOG(LogTemp, Warning, TEXT("%f"), *ptrFloat);	// 값


	int32 myNum = 3;
	PrintSquare(&myNum);
	UE_LOG(LogTemp, Warning, TEXT("%d"), myNum);
}

// ---------------------------------------------------------------------------------------------------------------------------------







void AShootingPlayer::Tick(float DeltaTime)	// update
{
	Super::Tick(DeltaTime);

	// 사용자가 입력한 방향대로 이동을 하고 싶다.


	// 자동 이동
	//Move(FVector(0,0,1), DeltaTime);
}

// Allows a Pawn to set up custom input bindings.
void AShootingPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AShootingPlayer::Move(FVector direction, float deltaTime)
{
	// direction의 방향으로 이동한다.
	// 이동 구성 요소 : 방향, 속력, 시간
	FVector prevLocation = GetActorLocation();
	FVector nextLocation = prevLocation + direction * speed * deltaTime;
	SetActorLocation(nextLocation);

	//SetActorLocation(GetActorLocation() + direction * speed * deltaTime);
}














// ----------------------------------------------------------------------------------------------------------------


// AShootingPlayer:: -> 함수 정의할 때 자료형 다음에 클래스 이름 붙여줘야함
//int32 AShootingPlayer::Add(int32 num1, int32 num2) {
//	return num1 + num2;
//}

int32 AShootingPlayer::Multiply(int32 num1, int32 num2)
{
	return num1 * num2;
}

float AShootingPlayer::GetNumberFloat()
{
	return numberFloat;
}

void AShootingPlayer::PrintInputNumber(int32 targetNum)
{
	for (int i = 0; i < targetNum; i++) {
		UE_LOG(LogTemp, Warning, TEXT("%d"), i + 1);
	}
}

void AShootingPlayer::PrintSquare(int32* originNumber) {
	*originNumber *= *originNumber;		// origin의 값을 제곱해서 origin값으로 넣어준다 ( * : 주소 안의 값)
}
