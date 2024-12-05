#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

	for (int i = 0; i < queries.size(); i++) {

		int s = queries[i][0];
		int e = queries[i][1];

		for (int j = s; j <= e; j++) {
			arr[j] += 1;
		}

	}

	return arr;
}