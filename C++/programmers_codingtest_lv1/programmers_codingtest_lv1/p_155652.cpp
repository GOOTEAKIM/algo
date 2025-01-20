#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

string solution(string s, string skip, int index) {

	string ans = "";

	set<char> pass;

	for (int i = 0; i < skip.length(); i++) {

		pass.insert(skip[i]);
	}

	for (int i = 0; i < s.length(); i++) {

		for (int j = 0; j < index; j++) {

			s[i]++;

			if (s[i] > 122) {
				s[i] -= 26;
			}

			while (pass.find(s[i]) != pass.end()) {
				s[i]++;

				if (s[i] > 122) {
					s[i] -= 26;
				}
			}
		}

	}

	ans = s;

	return ans;

}