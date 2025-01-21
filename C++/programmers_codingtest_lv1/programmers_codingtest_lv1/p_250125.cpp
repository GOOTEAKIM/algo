#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {

	// 1.
	int n = board.size();

	// 2. 
	int count = 0;

	// 3.
	vector<int> dh = { 0,1,-1,0 };
	vector<int> dw = { 1,0,0,-1 };

	// 4.
	for (int i = 0; i < dh.size(); i++) {

		int h_check = h + dh[i];
		int w_check = w + dw[i];


		if (0 <= h_check && h_check < n && 0 <= w_check && w_check < n) {

			if (board[h][w] == board[h_check][w_check]) {
				count++;
			}

		}

	}
	return count;
}