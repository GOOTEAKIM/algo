#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long solution(vector<int> weights) {
	
	long long ans = 0;

	unordered_map<int, int> weightCount;
	
	for (int w : weights) {
		weightCount[w]++;
	}

	for (auto& [weight, count] : weightCount) {

		if (count > 1) {
			ans += 1LL * count * (count - 1) / 2;
		}

		if (weightCount.count(weight * 2)) {
			ans += 1LL * count * weightCount[weight * 2];
		}

		if (weight % 2 == 0 && weightCount.count(weight / 2 * 3)) {
			ans += 1LL * count * weightCount[weight / 2 * 3];
		}

		if (weight % 3 == 0 && weightCount.count(weight / 3 * 4)) {
			ans += 1LL * count * weightCount[weight /3 *4];
		}

	}

	return ans;
}

