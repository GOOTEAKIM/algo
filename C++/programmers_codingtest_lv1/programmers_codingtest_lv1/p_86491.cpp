#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {

	int garo = 0;
	int sero = 0;

	for (auto& book : sizes) {


		if (book[0] <book[1]) {

			swap(book[0], book[1]);

		}

		if (garo < book[0]) {
			garo = book[0];
		}
		if (sero < book[1]) {
			sero = book[1];
		}
	}

	return garo * sero;
}