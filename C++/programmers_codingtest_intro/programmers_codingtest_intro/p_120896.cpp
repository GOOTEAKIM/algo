#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s) {

	string answer = "";

	map<char, int> book;

	for (auto ch : s) {
		book[ch]++;
	}

	for (auto& entry : book) {
		if (entry.second == 1) {
			answer += entry.first;
		}

	}

	sort(answer.begin(), answer.end());

	return answer;
}