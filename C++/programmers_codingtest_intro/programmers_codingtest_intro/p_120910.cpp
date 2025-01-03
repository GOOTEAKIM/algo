#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int t) {

	long long answer = n;

	for (int i = 0; i < t; i++) {
		answer *= 2;
	}
	return answer;
}