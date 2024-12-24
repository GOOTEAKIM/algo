#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {

	vector<int> ans;

	for (int i = 2; i <= n; i++) {
		while (n % i == 0) {
			if (find(ans.begin(), ans.end(), i) == ans.end()) {
				ans.push_back(i);
			}
			n /= i;
		}
	}
	if (n > 1) {
		ans.push_back(n);
	}

	return ans;
}