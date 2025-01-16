#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	
	vector<int> ans;
	
	int cnt = count(lottos.begin(), lottos.end(), 0);

	int rank = 7;

	int avg = 0;

	for (int num : lottos) {
		if (find(win_nums.begin(), win_nums.end(), num) != win_nums.end()) {
			avg++;
		}
	}

	int maximum = 0;

	if (avg == 0) {
		rank--;
		maximum = rank;
	}
	else
	{
		maximum = rank - avg;
	}

	int minimum = maximum - cnt;

	if (minimum == 0) {
		minimum++;
	}

	ans.push_back(minimum);
	ans.push_back(maximum);

	return ans;

}