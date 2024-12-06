#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {

	int total = 0;

	for (int num : numbers) {
		total += num;
	}

	return (double)total / numbers.size();
}