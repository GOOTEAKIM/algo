#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) {

	vector<int> ans(right-left+1); // �迭 ũ�� �Ҵ�

	for (long long idx = left; idx <= right; idx++) {

		long long y = idx / n;
		long long x = idx % n;

		ans[idx - left] = max(y, x) + 1;

	}

	return ans;
}