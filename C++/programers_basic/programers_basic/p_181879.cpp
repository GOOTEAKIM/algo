#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> num_list) {
	int answer = 0;

	if (num_list.size() >= 11) {
		answer = accumulate(num_list.begin(), num_list.end(),0);
	}
	else if (num_list.size() <= 10) {
		answer = accumulate(num_list.begin(), num_list.end(), 1, multiplies<int>());
	}

	return answer;
}