#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {

	vector<pair<pair<int, int>, pair<int, int>>> combinations = {
		{{0,1}, {2,3}},
		{{0,2}, {1,3}},
		{{0,3}, {1,2}}
	};

	for (auto comb : combinations) {

		pair<int, int> line1 = comb.first;
		pair<int, int> line2 = comb.second;

		int front_x = dots[line1.second][0] - dots[line1.first][0];
		int front_y = dots[line1.second][1] - dots[line1.first][1];

		int back_x = dots[line2.second][0] - dots[line2.first][0];
		int back_y = dots[line2.second][1] - dots[line2.first][1];

		if (front_y * back_x == back_y * front_x) {
			return 1;
		}

	}

	return 0;
}