#include "ShootingPlayer.h"
#include "PointerTestActor.h"
#include "Components/BoxComponent.h"	// 컴포넌트들은 Components파일 안에 있음. - 박스 컴포넌트 헤더파일
#include "Components/StaticMeshComponent.h"	//	- 스태틱메쉬 컴포넌트 헤더파일
#include "Components/ArrowComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BulletActor.h"
#include "ShootingGameModeBase.h"

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

	boxComp->SetCollisionProfileName(FName("PlayerPreset"));

	// 2. 스태틱 메시 컴포넌트를 생성한다.
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	// 2-1. 생성된 메시 컴포넌트를 루트의 자식 컴포넌트로 설정한다.
	meshComp->SetupAttachment(boxComp);

	// 2-2. 메시 컴포넌트의 위치를 z축으로 -50만큼 내린다.
	meshComp->SetRelativeLocation(FVector(0,0,-50));

	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 3. 총구 표시용 화살표 컴포넌트를 생성한다.
	fireLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow Component"));
	fireLocation->SetupAttachment(boxComp);
	fireLocation->SetRelativeLocation(FVector(0, 0, 100));
	fireLocation->SetRelativeRotation(FRotator(90, 0, 0));	// 에디터 상에서는 FRotator(Roll, Pitch, Yaw), C++에서는 FRotator(Pitch, Yaw, Roll)
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
	UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));

	//EnhancedInputSystem에서 입력 맵핑 콘텍스트 파일을 언리얼 엔진 시스템에 로드하기
	// 1. 현재 사용 중인 APlayerController 클래스 변수를 불러온다.
	APlayerController* pc = GetWorld()->GetFirstPlayerController();


	// (블루프린트에서 EnhancedInputLocalPlayerSubsystem 노드)
	if (pc != nullptr) {	// Access Violence Error : Null pointer인데 사용하려고 했다 ==> 이 에러가 발생하면 에디터가 튕기므로 포인터 변수는 항상 조건 처리

		// 2. EnhancedInput 내용을 담은 Subsystem을 가져온다.
		UEnhancedInputLocalPlayerSubsystem* subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());

		if (subsys != nullptr) {
			// 3. UEnhancedInputLocalPlayerSubsystem에 imc 파일 추가한다.
		// (블루프린트에서)
		// target		Mapping Context Asset name ,Priority)
		// subsys->AddMappingContext(imc_myMapping, 0);
			subsys->AddMappingContext(imc_myMapping, 0);
		}
		
	}
	else {	// if-else 둘 다 해주기
		UE_LOG(LogTemp, Error, TEXT("PlayerController is Null"))
	}

	

	













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
	FVector moveDir = FVector(0, inputDir.X, inputDir.Y);	// 포인터 변수일때 접근 : ->, 그냥 인스턴스일때 접근 : .
	Move(moveDir, DeltaTime);

	// 자동 이동
	//Move(FVector(0,0,1), DeltaTime);
}

// Allows input bindings.					UInputComponent : 예전 입력방식. 따라서 EnhancedInput으로 캐스팅(변환)해야함.
void AShootingPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)	// BeginPlay보다 먼저 실행됨
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// UInputComponent : 예전 입력방식. 따라서 EnhancedInput으로 캐스팅(변환)해야함.
	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	
	if (enhancedInputComponent != nullptr) {
		// 4. 입력 이벤트 컴포넌트에 실행할 함수를 연결(Binding)한다.					함수의 주소값을 가져옴
		enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Triggered, this, &AShootingPlayer::SetInputDirection);		// ETriggerEvent의 접두어 E : enum(열거) 클래스 (선택지를 만들어놓는 클래스)
		enhancedInputComponent->BindAction(ia_move, ETriggerEvent::Completed, this, &AShootingPlayer::SetInputDirection);
		enhancedInputComponent->BindAction(ia_fire, ETriggerEvent::Started, this, &AShootingPlayer::Fire);
		enhancedInputComponent->BindAction(ia_openMenu, ETriggerEvent::Started, this, &AShootingPlayer::ShowMenu);
						// 추가적인 입력은 여기에 한줄씩만 추가해주면 된다.
	}
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

void AShootingPlayer::SetInputDirection(const FInputActionValue& value)
{
	// 사용자의 실제 입력 값을 inputDir 변수에 저장한다.
	inputDir = value.Get<FVector2D>();		// value 값이 struct 자료형이기 때문에 강제로 Vector2D 형으로 캐스팅(Get) 한다.
											// FVector2D : IA에서 설정해놓은 Value Type과 동일해야함.
}

void AShootingPlayer::Fire(const FInputActionValue& value)
{
	// 충돌 옵션 : 무조건 내가 설정한 위치에서 생성되어야 한다.
	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;	// Spawn할때 충돌을 조절
	/*
	AlwaysSpawn : 항상 그 위치에 생성
	AdjustIfPossibleButAlwaysSpawn : Adjust(위치를 조절)해봐서, 될 것 같으면 원래 위치랑 가깝지만 최대한 안부딪히게 원래 위치와 가까운 위치에 생성
	AdjustIfPossibleButDontSpawnIfColliding : 아무리 Adjust(위치를 조절)해도 안될 것 같으면 생성 X
	*/

	// 총알 액터를 fire의 Location과 Rotation 위치 및 방향으로 생성한다.
	GetWorld()->SpawnActor<ABulletActor>(bulletFactory, fireLocation->GetComponentLocation(), fireLocation->GetComponentRotation(), params);	// GetWorld()->SpawnActor : Actor 의 새 인스턴스를 생성, UWorld 클래스에서 불러옴.

	// 총알 효과음을 출력한다.
	if (fireSound != nullptr) {
		UGameplayStatics::PlaySound2D(GetWorld(), fireSound);
	}
}

void AShootingPlayer::ShowMenu(const FInputActionValue& value)
{
	// 게임 모드에 있는 ShowGameOverUI() 함수를 실행한다.
	 AShootingGameModeBase* gm = Cast<AShootingGameModeBase>(GetWorld()->GetAuthGameMode());

	 if (gm != nullptr) {
		 gm->ShowGameOverUI();
	 }
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
