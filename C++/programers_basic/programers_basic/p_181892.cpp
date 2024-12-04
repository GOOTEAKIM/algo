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

	for (int i = n - 1; i < num_list.size(); i++) {
		answer.push_back(num_list[i]);
	}

	return answer;
}