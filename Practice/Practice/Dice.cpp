#include <iostream>
#include "Dice.h"

using namespace std;

Dice::Dice() {
	cin >> a >> b >> c;

	this->a = a;
	this->b = b;
	this->c = c;
	this->max = 0;
}

Dice::~Dice() {

}

void Dice::PrintEqualThree() {
	cout << 10000 + a * 1000;
}

void Dice::PrintEqualTwo() {
	cout << 1000 + a * 100;
}

void Dice::PrintDifferent() {
	cout << max * 100;
}

void Dice::Decision() {
	if (this->a == this->b && this->b == this->c)
		PrintEqualThree();
	else if (this->a == this->b)
		PrintEqualTwo();
	else if (this->b == this->c)
		PrintEqualTwo();
	else if (this->c == this->a)
		PrintEqualTwo();
	else {
		if (this->a > this->max)
			max = a;
		if (this->b > this->max)
			max = b;
		if (this->c > this->max)
			max = c;

		PrintDifferent();
	}
}