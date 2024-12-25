#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {

	int ans = 0;

	int wow = 10000000000000000;

	for (auto ar : array) {
		int diff = abs(n - ar);

		if (diff < wow || (diff == wow && ar <ans)) {
			wow = diff;
			ans = ar;
		}
	}

	return ans;
}