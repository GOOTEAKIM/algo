#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> strlist) {

	vector<int> answer;

	for (string word : strlist) {
		answer.push_back(word.length());
	}
	return answer;
}