#include <iostream>
using namespace std;

char global = 'G';

void Output() {	
	cout << "Hello World!" << endl;
}

int Sum(int parameter);	// �Լ� ����/���� ���� (�𸮾��������� �Լ� ������ ���� ���ְ�, �� ������ �Ʒ��� ����)

int main() {

	char mainLocal = 'M';

	// �Լ� ȣ��
	Output();

	cout << Sum(5) + 10 << endl;	// 5 : argument ��(���� ��)

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

int Sum(int parameter) {	// parameter ����
	int number = 10 + parameter;

	return number;
}
