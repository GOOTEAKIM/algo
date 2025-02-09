#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {

	unordered_set<int> arr;

	for (int i = 0; i < elements.size(); i++) {
		int sum = 0;

		for (int j = i; j < i + elements.size(); j++) {
			int idx = j % elements.size();

			sum += elements[idx];
			arr.insert(sum);
		}
	}

	return arr.size();
}