#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {

	vector<vector<int>> answer;

	for (int i = 0; i < num_list.size()/n; i++) {
		answer.push_back({ num_list.begin() + i*n, num_list.begin() + i* n +n});
	}

	return answer;
}