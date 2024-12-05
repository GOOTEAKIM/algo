#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	return 0;
}

vector<string> solution(vector<string> names) {

	vector<string> answer;

	for (int i = 0; i < names.size(); i++) {
		if (i % 5 == 0) {
			answer.push_back(names[i]);
		}
	}

	return answer;
}