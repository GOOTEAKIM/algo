#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string s) {

	string ans = "";

	string word = "";

	for (int i = 0; i < s.length(); i++) {

		if (i == 0 || s[i-1] == ' ') {

			word += toupper(s[i]);
			
		}
		else if (s[i] == ' ') {
			word += s[i];
			ans += word;
			word = "";
		}
		else
		{
			word += tolower(s[i]);
		}

	}

	ans += word;

	return ans;
}