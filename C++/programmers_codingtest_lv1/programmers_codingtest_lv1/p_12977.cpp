#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> nums) {

	int total = accumulate(nums.begin(), nums.end(), 0);

	vector<bool> check(total + 1, true);

	int ans = 0;

	for (int i = 2; i <= total; i++) {

		if (check[i]) {
			for (int j = 2; j * i <= total; j++) {
				check[i * j] = false;
			}
		}
	}

	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			for (int k = j + 1; k < nums.size(); k++) {
				int num = nums[i] + nums[j] + nums[k];

				if (check[num]) {
					ans++;
				}
			}
		}
	}

	return ans;
}