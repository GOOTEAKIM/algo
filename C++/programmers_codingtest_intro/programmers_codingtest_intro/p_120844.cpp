#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
	
	if (direction == "right") {
		rotate(numbers.begin(), numbers.end() - 1, numbers.end());
	}
	else
	{
		rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
	}

	return numbers;
}