#include <iostream>
#include <vector>

using namespace std;

/*

1. double(num2)의 역할:

double(num2)는 num2를 double 형으로 변환합니다.
예를 들어, num2 = 2일 경우, 정수 2가 실수 2.0으로 변환됩니다.
C++에서는 연산 중 피연산자 중 하나가 실수(float 또는 double)라면, 다른 피연산자도 자동으로 실수로 변환됩니다. 이를 **암묵적 형 변환(Implicit Type Conversion)**이라고 합니다.

2. 실수 나눗셈:

num1이 정수라 해도, num2가 실수로 변환되었기 때문에, num1 / double(num2)는 실수 연산으로 동작합니다.
예: 3 / 2.0 = 1.5.
*/

int solution(int num1, int num2) {
	return num1 / double(num2) * 1000;
}