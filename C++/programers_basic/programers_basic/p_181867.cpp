#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(string myString) {

	vector<int> answer;

	string word = "";

	for (int i = 0; i < myString.length(); i++) {
		if (myString[i] != 'x') {
			word += myString[i];
		}
		else
		{
	
			answer.push_back(word.length());
			word = "";

		}
	}

	answer.push_back(word.length());

	return answer;
}