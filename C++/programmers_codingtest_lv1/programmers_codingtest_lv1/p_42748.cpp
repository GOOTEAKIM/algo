#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

	vector<int> ans;

	for (auto order : commands) {
		int front = order[0]-1;
		int back = order[1];
		int position = order[2] - 1;

		vector<int> sub(array.begin() + front, array.begin() + back);

		sort(sub.begin(), sub.end());
		
		ans.push_back(sub[position]);
	}

	return ans;
}