#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {

	int ans = 0;

	for (int i = 0; i < absolutes.size(); i++) {
		if (signs[i] == true) {
			ans += absolutes[i];
		}
		else
		{
			ans -= absolutes[i];
		}
	}

	return ans;
}