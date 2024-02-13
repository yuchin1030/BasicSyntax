#include <iostream>
using namespace std;

// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

int main()
{
	int score;
	char exit = NULL;
	
	while (true) {
		cout << "시험 점수를 입력해주세요 : ";
		cin >> score;

		if (score >= 90)
			cout << 'A' << endl;
		else if (score >= 80)
			cout << 'B' << endl;
		else if (score >= 70)
			cout << 'C' << endl;
		else if (score >= 60)
			cout << 'D' << endl;
		else
			cout << 'F' << endl;

		cout << "종료하시겠습니까? (종료:Y/y) : ";
		cin >> exit;

		if (exit == 'Y' || exit == 'y')
			break;
	}
	


	return 0;
}