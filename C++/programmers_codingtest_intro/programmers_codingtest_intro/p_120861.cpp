#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {

	vector<int> result = { 0,0 };

	for (auto word : keyinput) {

		if (word == "up") {
			if (result[1] < board[1] / 2) {
				result[1]++;
			}
		}
		else if (word == "down") {
			if (result[1] > -(board[1] / 2)) {
				result[1]--;
			}
		}
		else if (word == "right") {
			if (result[0] < board[0] / 2) {
				result[0]++;
			}
		}
		else
		{
			if (result[0] > -(board[0] / 2)) {
				result[0]--;
			}
		}
	}
	return result;
}