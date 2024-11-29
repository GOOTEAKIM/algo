#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

	for (int i = 0; i < queries.size(); i++) {
		arr.erase(arr.begin(), arr.end() -1*(i));
	}
}