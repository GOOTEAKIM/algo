#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {

	int ans = 0;

	vector<bool> total(n + 1, true);

	for (int i = 2; i <= n; i++) {
		if (total[i]) {
			for (int j = 2; j * i <= n; j++) {
				total[i * j] = false;
			}
			ans++;
		}
	}
	return ans;
}