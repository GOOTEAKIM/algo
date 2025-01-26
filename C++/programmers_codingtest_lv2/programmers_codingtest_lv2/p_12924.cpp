#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		int sum = 0, start = i;

		while (sum < n) {
			sum += start++;
		}

		if (sum == n) {
			ans++;
		}
	}

	return ans;
}