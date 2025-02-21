#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> land) {

	int n = land.size();

	// 첫번째 줄은 그대로 둔다

	for (int i = 1; i < n; i++) {

		for (int j = 0; j < 4; j++) {

			int max_val = 0;

			for (int k = 0; k < 4; k++) {

				if (k != j) {
					max_val = max(max_val, land[i - 1][k]);
				}

			}
			land[i][j] += max_val;
		}
	}

	return *max_element(land[n - 1].begin(), land[n - 1].end());
}