#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {

	string ans = "";

	int index = 0;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == ' ') {
			ans += s[i];
			index = 0;
		}
		else
		{
			if (index % 2 == 0) {
				ans += toupper(s[i]);
			}
			else
			{
				ans += tolower(s[i]);
			}
			index++;
		}

	}

	return ans;
}