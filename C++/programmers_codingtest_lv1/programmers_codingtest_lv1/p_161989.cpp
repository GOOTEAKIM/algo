#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {

	int cnt = 0;

	int last = 0;

	for (int num : section) {

		if (num > last) {
			cnt++;
			last = num + m - 1;
		}

	}

	return cnt;
}