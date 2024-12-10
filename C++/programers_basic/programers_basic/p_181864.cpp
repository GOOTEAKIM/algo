#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {

	int answer = 0;

	string word = "";

	for (int i = 0; i < myString.length(); i++) {
		if (myString[i] == 'A') {
			word += 'B';
		}
		else if (myString[i] == 'B') {
			word += 'A';
		}
		else
		{
			word += myString[i];
		}
	}

	for (int i = 0; i < word.length() - pat.length()+1; i++) {

		if (pat == word.substr(i, pat.length())) {
			return 1;
		}
	}

	return answer;
}