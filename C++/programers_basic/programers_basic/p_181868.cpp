#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> solution(string my_string) {

	vector<string> answer;
	string word = "";
	for (int i = 0; i < my_string.length(); i++) {

		if (my_string[i] != ' ') {
			word += my_string[i];
		}
		else
		{
			
			if (!word.empty()) {

				answer.push_back(word);
				word = "";
			}
			word = "";
		}

	}
	if (!word.empty()) {
		answer.push_back(word);
	}

	return answer;

}