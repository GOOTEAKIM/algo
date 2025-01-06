#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {


	while (b % 2 == 0) {
		b /= 2;
	}

	while (b % 5 == 0) {
		b /= 5;
	}

	return (a % b == 0) ? 1 : 2;
}