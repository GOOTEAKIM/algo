#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {

	auto mininum = min_element(arr.begin(), arr.end());

	arr.erase(mininum);

	if (arr.empty()) {
		arr.push_back(-1);
	}
	return arr;
}