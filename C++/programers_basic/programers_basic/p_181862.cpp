#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> solution(string myStr) {

	vector<string> answer;

	string temp = "";
	
	for (char my : myStr) {
		if (my == 'a' || my == 'b' || my == 'c') {
			if (temp != "") {
				answer.push_back(temp);
				temp = "";
			}
		}
		else
		{
			temp += my;
		}
	}

	if (temp != "") {
		answer.push_back(temp);
	}
	
	return (answer.empty()) ? vector<string>(1, "EMPTY") : answer;
}