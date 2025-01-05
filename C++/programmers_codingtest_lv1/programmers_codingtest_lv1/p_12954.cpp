#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> solution(int x, int n) {

	vector<long long> ans;

	int number = x;

	for (int i = 0; i < n; i++) {

		ans.push_back(number);
		number += x;
	}

	return ans;
}