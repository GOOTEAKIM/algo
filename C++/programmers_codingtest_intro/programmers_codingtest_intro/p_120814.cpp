#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {

	if (n % 7 == 0) {
		return (n / 7);
	}

	return (n / 7)+1;
}