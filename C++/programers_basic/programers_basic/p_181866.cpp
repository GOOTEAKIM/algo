#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<string> solution(string myString) {

	vector<string> answer;

	string word = "";

	for (int i = 0; i < myString.length(); i++) {

		if (myString[i] != 'x') {
			word += myString[i];
		}
		else
		{	
			if (!word.empty()) {
				answer.push_back(word);
			}
			word = "";
		}
	}

	if (!word.empty()) {

		answer.push_back(word);
	}

	sort(answer.begin(), answer.end());

	return answer;

}