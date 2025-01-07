#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<vector<int>> score) {

	vector<int> ans;

	vector<int> v;

	for (int i = 0; i < score.size(); i++) {

		v.push_back(score[i][0] + score[i][1]);

	}

	for (int i = 0; i < v.size(); i++) {
		int cnt = 1;
		for (int j = 0; j < v.size(); j++) {
			if (v[i] < v[j]) cnt++;
		}

		ans.push_back(cnt);
	}
	return ans;
}