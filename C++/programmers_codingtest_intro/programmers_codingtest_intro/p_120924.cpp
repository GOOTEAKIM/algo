#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> common) {

	int diff = 0;
	int gop = 0;

	if (common[2] - common[1] == common[1] - common[0]) {
		diff = common[1] - common[0];

		int ans = common[common.size()-1] + diff;

		return ans;
	}

	else
	{
		gop = common[1] / common[0];

		int ans = common[common.size() - 1] * gop;

		return ans;
	}

}