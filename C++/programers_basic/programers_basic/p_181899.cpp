#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector <int> solution(int start_num, int end_num) {

	vector<int> answer;

	for (int i = start_num; i >= end_num; i--) {
		answer.push_back(i);
	}

	return answer;
}