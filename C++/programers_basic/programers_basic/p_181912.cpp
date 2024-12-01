#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<string> intStrs, int k, int s, int l) {

	vector<int> answer;

	for (int i = 0; i < intStrs.size(); i++) {

		int word = stoi(intStrs[i].substr(s, l));

		if (word > k) answer.push_back(word);
	}

	return answer;
}