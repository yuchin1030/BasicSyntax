#include <iostream>
#include "Basic3.h"

using namespace std;

int main() {
	CarSUV Carnival;	// ����

	int _number = 0;
	cin >> _number;

	// �޼ҵ� ȣ�� (����)
	Carnival.CarPrint();
	Carnival.SetNumber(_number);
	cout << Carnival.GetNumber() << endl;
	Carnival.CarPrint();

	// Ŭ���� ��ü ���� ���� ����
	CarSUV* Sonata = new CarSUV;	

	// ���� ������ ��ü �޼ҵ� ȣ�� 
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
	cout << "Bye" << endl;	// ���߿� ������ �Ҹ��ڰ� ���� ��µ�(���ð� ����)
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

