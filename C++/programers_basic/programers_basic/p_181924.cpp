#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

	for (int k = 0; k < queries.size(); k++) {
		int i = queries[k][0];
		int j = queries[k][1];

		swap(arr[i], arr[j]);
	}

	return arr;

}

