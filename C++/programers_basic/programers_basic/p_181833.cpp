#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(int n) {

	vector<vector<int>> answer(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		answer[i][i] = 1;
	}

	return answer;

}