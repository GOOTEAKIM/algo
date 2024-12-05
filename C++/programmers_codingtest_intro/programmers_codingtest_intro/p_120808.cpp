#include <iostream>
#include <vector>

using namespace std;

// 유클리드 호제법
int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {

	vector<int> answer;

	numer1 *= denom2;
	numer2 *= denom1;

	int mother = denom1 * denom2;
	int son = numer1 + numer2;

	int god = gcd(son, mother);

	son /= god;
	mother /= god;

	answer.push_back(son);
	answer.push_back(mother);

	return answer;

}