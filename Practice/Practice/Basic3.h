/*
	class 설계도 생성 => class 변수 타입 생성

	* 정보 은닉 : 프로퍼티/메소드에 접근 권한
		- public : 공용 - 클래스바깥 위치에서 접근 가능
		- private :전용 - 클래스 내부 위치에서만 접근 가능
		- protectted : 상속 전용 - 상속받은 클래스에서 접근 가능
		- 키워드를 사용하지 않으면 private이 디폴트

		- 프로퍼티는 클래스 외부에서 접근하지 못하게 하는 경우가 일반적 => private 상태로 설정
		- 프로퍼티에 접근하는 내부 메소드 필요

	* Set/Get 메소드
		- Set : 클래스 내부 프로퍼티의 데이터를 지정
		- Get : 프로퍼티의 데이터를 읽어옴
*/

class CarSUV {

private:
	int number = 1234;
	char brand = 'A';
	char color = 'R';
	int door = 5;
	int seat = 7;

public:
	CarSUV();

	~CarSUV();

	void SetNumber(int number) {
		if (number >= 9999) {
			cout << "잘못입력했습니다." << endl;
		}
		else {
			this->number = number;
		}

	}

	int GetNumber() {
		return number;
	}

	void CarPrint();
};

class Phone {

private:
	char color;
	char brand;
	int modelNumber;

public:
	Phone(char color, char brand, int modelNumber);
	~Phone();
	char GetColor(char item);
};

