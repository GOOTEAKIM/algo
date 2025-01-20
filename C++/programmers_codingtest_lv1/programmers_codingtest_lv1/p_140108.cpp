#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;

int solution(string s) {

	vector<string> book;

	char front = s[0];

	int cnt = 0;

	string word = "";

	for (int i = 0; i < s.length(); i++) {

		if (i == 0) {
			cnt += 1;
			word += s[0];
		}
		else
		{
			word += s[i];

			if (s[i] == front) {
				cnt++;
			}
			else
			{
				cnt--;
			}

			if (cnt == 0) {
				book.push_back(word);
				word = "";
				front = s[i+1];
			}
		}

		if (i == s.length() - 1) {
			if (word != "") {
				book.push_back(word);
			}
		}

	}
	return book.size();

}