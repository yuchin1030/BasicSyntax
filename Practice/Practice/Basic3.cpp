#include <iostream>
#include "Basic3.h"

using namespace std;

int main() {
	CarSUV Carnival;	// 정적

	int _number = 0;
	cin >> _number;

	// 메소드 호출 (정적)
	Carnival.CarPrint();
	Carnival.SetNumber(_number);
	cout << Carnival.GetNumber() << endl;
	Carnival.CarPrint();

	// 클래스 객체 변수 동적 생성
	CarSUV* Sonata = new CarSUV;	

	// 동적 생성된 객체 메소드 호출 
	Sonata->CarPrint();




	Phone IPhone('W', 'A', 123);
	cout << IPhone.GetColor('C') << endl;
	cout << IPhone.GetColor('B') << endl;


}

Phone::Phone(char color, char brand, int modelNumber) {
	this->color = color;
	this->brand = brand;
	this->modelNumber = modelNumber;
}

Phone::~Phone() {
	cout << "Bye" << endl;	// 나중에 선언한 소멸자가 먼저 출력됨(스택과 같음)
}

char Phone::GetColor(char item) {

	switch (item) {
	case 'C':
		return color;
		break;
	case 'B':
		return brand;
		break;
	}

}

CarSUV::CarSUV() {
	cout << "Constructor" << endl;
}

CarSUV::~CarSUV() {
	cout << "Destructor" << endl;
}

void CarSUV::CarPrint() {
	cout << number << endl;
	cout << brand << endl;
	cout << color << endl;
	cout << door << endl;
	cout << seat << endl;
}

