#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int> num_list, int n) {

	vector<int> answer;

	answer.assign(num_list.begin() + n, num_list.end());

	for (int i = 0; i < n; i++) {
		answer.push_back(num_list[i]);
	}

	return answer;
}