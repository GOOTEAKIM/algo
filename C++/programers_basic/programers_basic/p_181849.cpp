#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(string num_str) {

	int answer = 0;

	for (auto num : num_str) {

		answer += num-'0';

	}

	return answer;
}