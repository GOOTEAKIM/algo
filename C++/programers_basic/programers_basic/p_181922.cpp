#include <iostream>
#include <vector>

using namespace std;

int main() {


	return 0;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

	vector<int> answer = arr;

	for (int i = 0; i < queries.size(); i++) {

		int start = queries[i][0];
		int end = queries[i][1];
		int value = queries[i][2];

		for (int j = start; j <= end; j++) {
			if (j % value == 0) {
				answer[j] += 1;
			}
		}
	}
	
	return answer;
}