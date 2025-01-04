#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board) {

	int ans = 0;

	vector<vector<int>> direction = {
		{-1,-1},
		{0,-1},
		{1,-1},
		{-1,0},
		{1,0},
		{-1,1},
		{0,1 },
		{1,1}
	};

	int len = board.size();

	for (int i = 0; i < len; i++) {

		for (int j = 0; j < len; j++) {

			if (board[i][j] == 1) {
				for (int k = 0; k < direction.size(); k++) {

					int dx = direction[k][0];
					int dy = direction[k][1];

					if (i + dx >= 0 && i + dx < len) {
						if (j + dy >= 0 && j + dy < len) {

							if (board[i + dx][j + dy] != 1) {
								board[i + dx][j + dy] += 2;
							}
						}
					}

				}

			}
		}
	}

	for (int i = 0; i < len; i++) {

		for (int j = 0; j < len; j++) {

			if (board[i][j] == 0) {
				ans++;
			}
		}
	}

	return ans;
}