#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {

	int len = A.length();

	for (int cnt = 0; cnt < len; cnt++) {

		if (A == B) {
			return cnt;
		}

		char lastChar = A[len - 1];
		A.pop_back();
		A.insert(A.begin(), lastChar);

	}

	return -1;
}