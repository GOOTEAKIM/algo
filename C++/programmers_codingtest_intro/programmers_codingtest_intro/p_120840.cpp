#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int balls, int share) {

	long answer = 1;
	int a;

	if (balls - share < share) {
		a = balls - share;
	}
	else
	{
		a = share;
	}

	for (int i= 0; i < a; i++) {
		answer *= (balls - i);
		answer /= (i + 1);
	}
	return answer;
}