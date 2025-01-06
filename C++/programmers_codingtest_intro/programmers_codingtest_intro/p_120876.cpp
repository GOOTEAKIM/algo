#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {

	int ans = 0;

	vector<int> book(201, 0);

	for (auto line : lines) {

		int front = line[0];
		int back = line[1];

		front += 100;
		back += 100;

		for (int i = front; i < back; i++) {
			book[i]++;
		}
	}


	for (int number : book) {
		if (number > 1) {
			ans++;
		}
	}
	return ans;
}