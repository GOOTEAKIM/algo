#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {

	sort(spell.begin(), spell.end());

	string target = "";

	for ( string s : spell) {
		target += s;
	}

	for (string word : dic) {

		sort(word.begin(), word.end());

		if (word == target) {
			return 1;
		}

	}

	return 2;
}