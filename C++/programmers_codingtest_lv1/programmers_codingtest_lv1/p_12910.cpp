#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {

	vector<int> ans;

	for (int num : arr) {
		if (num % divisor == 0) {
			ans.push_back(num);
		}
	}

	sort(ans.begin(), ans.end());

	if (ans.empty()) {
		ans.push_back(-1);
	}

	return ans;
}