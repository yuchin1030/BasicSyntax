#include <iostream>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
	int answer = 0;

	if (a == b && b == c && c == d) {	// 4개 다 같을 때
		answer = 1111 * a;
	}
	else if (a == b && b == c) {	// 3개 같고 1개 다를 때
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
	else if (a == b && c == d) {	// 각각 2개씩 같을 때
		answer = (a + c) * abs(a - c);
	}
	else if (a == c && b == d) {
		answer = (a + b) * abs(a - b);
	}
	else if (a == d && b == c) {
		answer = (a + b) * abs(a - b);
	}
	else if (a == b) {	// 2개만 같고 나머지 다를 때
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
	else {	// 다 다를 때
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
네 주사위에서 나온 숫자가 모두 p로 같다면 1111 × p점을 얻습니다.
세 주사위에서 나온 숫자가 p로 같고 나머지 다른 주사위에서 나온 숫자가 q(p ≠ q)라면 (10 × p + q)2 점을 얻습니다.
주사위가 두 개씩 같은 값이 나오고, 나온 숫자를 각각 p, q(p ≠ q)라고 한다면 (p + q) × |p - q|점을 얻습니다.
어느 두 주사위에서 나온 숫자가 p로 같고 나머지 두 주사위에서 나온 숫자가 각각 p와 다른 q, r(q ≠ r)이라면 q × r점을 얻습니다.

네 주사위에 적힌 숫자가 모두 다르다면 나온 숫자 중 가장 작은 숫자 만큼의 점수를 얻습니다.

네 주사위를 굴렸을 때 나온 숫자가 정수 매개변수 a, b, c, d로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.

a, b, c, d는 1 이상 6 이하의 정수입니다.
*/