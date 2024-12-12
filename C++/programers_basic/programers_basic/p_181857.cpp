#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	
	int size = arr.size();

	int beTwo = 1;

	while (beTwo< size) {
		beTwo *= 2;
	}

	while (arr.size() < beTwo) {
		arr.push_back(0);
	}

	return arr;
}