#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {

	int ans = 45;

	for (int n : numbers) {
		ans -= n;
	}

	return ans;
}