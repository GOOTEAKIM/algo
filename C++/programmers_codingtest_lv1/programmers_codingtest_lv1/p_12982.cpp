#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {

	sort(d.begin(), d.end());

	int ans = 0;

	int cnt = 0;

	for (int i : d) {
		ans += i;
		if (ans <= budget) {
			cnt++;
		}
	}

	return cnt;
}