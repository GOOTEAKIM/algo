#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string solution(vector<string> str_list, string ex) {

	string answer = "";

	for (string word : str_list) {

		if (word.find(ex) == string::npos) {
			answer += word;
		}
	}
	return answer;
}