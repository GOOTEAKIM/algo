#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string s, int n) {

	string ans = "";

	for (auto spell : s) {

		if (spell == ' '){
			ans += spell;
		}
		else if ('a' <= spell && spell <= 'z')
		{
			ans += (spell - 'a' + n) % 26 + 'a';
		}
		else if ('A' <= spell && spell <= 'Z') {

			ans += (spell - 'A' + n) % 26 + 'A';
		}

	}
	return ans;
}