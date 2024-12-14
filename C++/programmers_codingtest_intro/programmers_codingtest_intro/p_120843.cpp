#include <iostream>
#include<vector>

using namespace std;

int solution(vector<int> numbers, int k) {
	int n = numbers.size();

	int index = 0;

	for (int i = 0; i < k - 1; i++) {
		index = (index + 2) % n;
	}

	return numbers[index];
}