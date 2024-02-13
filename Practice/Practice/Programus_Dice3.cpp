#include <iostream>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
	int answer = 0;

	if (a == b && b == c && c == d) {	// 4�� �� ���� ��
		answer = 1111 * a;
	}
	else if (a == b && b == c) {	// 3�� ���� 1�� �ٸ� ��
		answer = pow((10 * b + d), 2);
	}
	else if (a == b && b == d) {
		answer = pow((10 * b + c), 2);
	}
	else if (a == c && c == d) {
		answer = pow((10 * c + b), 2);
	}
	else if (b == c && c == d) {
		answer = pow((10 * c + a), 2);
	}
	else if (a == b && c == d) {	// ���� 2���� ���� ��
		answer = (a + c) * abs(a - c);
	}
	else if (a == c && b == d) {
		answer = (a + b) * abs(a - b);
	}
	else if (a == d && b == c) {
		answer = (a + b) * abs(a - b);
	}
	else if (a == b) {	// 2���� ���� ������ �ٸ� ��
		answer = c * d;
	}
	else if (a == c) {
		answer = b * d;
	}
	else if (a == d) {
		answer = b * c;
	}
	else if (b == c) {
		answer = a * d;
	}
	else if (b == d) {
		answer = a * c;
	}
	else if (c == d) {
		answer = a * b;
	}
	else {	// �� �ٸ� ��
		answer = min(min(min(a, b), c), d);
	}

	return answer;
}

int main() {
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;

	cout << solution(a, b, c, d) << endl;
		 
	return 0;
}

/*
�� �ֻ������� ���� ���ڰ� ��� p�� ���ٸ� 1111 �� p���� ����ϴ�.
�� �ֻ������� ���� ���ڰ� p�� ���� ������ �ٸ� �ֻ������� ���� ���ڰ� q(p �� q)��� (10 �� p + q)2 ���� ����ϴ�.
�ֻ����� �� ���� ���� ���� ������, ���� ���ڸ� ���� p, q(p �� q)��� �Ѵٸ� (p + q) �� |p - q|���� ����ϴ�.
��� �� �ֻ������� ���� ���ڰ� p�� ���� ������ �� �ֻ������� ���� ���ڰ� ���� p�� �ٸ� q, r(q �� r)�̶�� q �� r���� ����ϴ�.

�� �ֻ����� ���� ���ڰ� ��� �ٸ��ٸ� ���� ���� �� ���� ���� ���� ��ŭ�� ������ ����ϴ�.

�� �ֻ����� ������ �� ���� ���ڰ� ���� �Ű����� a, b, c, d�� �־��� ��, ��� ������ return �ϴ� solution �Լ��� �ۼ��� �ּ���.

a, b, c, d�� 1 �̻� 6 ������ �����Դϴ�.
*/