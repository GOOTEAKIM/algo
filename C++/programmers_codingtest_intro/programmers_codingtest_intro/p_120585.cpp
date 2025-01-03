#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) {

	int ans = 0;

	for (int people : array) {
		if (height < people) {
			ans++;
		}
	}

	return ans;
}