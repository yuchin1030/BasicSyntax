#include <iostream>
using namespace std;

char global = 'G';

void Output() {	
	cout << "Hello World!" << endl;
}

int Sum(int parameter);	// 함수 원형/전방 선언 (언리얼엔진에서는 함수 원형을 위에 써주고, 그 내용을 아래에 써줌)

int main() {

	char mainLocal = 'M';

	// 함수 호출
	Output();

	cout << Sum(5) + 10 << endl;	// 5 : argument 값(실제 값)

	cout << Sum(10) << endl;

	if (true) {
		char codeLocal1 = 'C';

		cout << global << endl;
		cout << mainLocal << endl;
		cout << codeLocal1 << endl;
		//cout << codeLocal2 << endl;
		//cout << number << endl;
	}

	if (true) {
		char codeLocal2 = 'L';

		cout << global << endl;
		cout << mainLocal << endl;
		//cout << codeLocal1 << endl;
		cout << codeLocal2 << endl;
		//cout << number << endl;
	}



	cout << global << endl;
	cout << mainLocal << endl;
	//cout << codeLocal1 << endl;
	//cout << codeLocal2 << endl
	//cout << number << endl;




	return 0;
}

int Sum(int parameter) {	// parameter 변수
	int number = 10 + parameter;

	return number;
}
