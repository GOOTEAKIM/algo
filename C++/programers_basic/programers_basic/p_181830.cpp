#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {

	int hang = arr.size();
	int yeol = arr[0].size();

	if (hang > yeol) {

		for (int i = 0; i < arr.size(); i++) {

			for (int j = 0; j < hang - yeol; j++) {
				arr[i].push_back(0);
			}
		}
	}
	else if (hang < yeol) {

		for (int i = 0; i < yeol - hang; i++) {
			vector<int> toto;
			for (int j = 0; j < yeol; j++) {
				toto.push_back(0);
			}
			arr.push_back(toto);
		}

	}

	return arr;
}