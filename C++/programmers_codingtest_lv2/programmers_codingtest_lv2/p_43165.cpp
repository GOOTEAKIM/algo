#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int ans = 0;

void dfs(vector<int> numbers, int target, int sum, int idx) {

	// 종료 조건

	if (idx == numbers.size()) {
		if (sum == target) {
			ans++;
		}
		return;
	}

	dfs(numbers, target, sum + numbers[idx], idx + 1);
	dfs(numbers, target, sum - numbers[idx], idx + 1);

}


int solution(vector<int> numbers, int target) {

	dfs(numbers, target, 0, 0);

	return ans;

}