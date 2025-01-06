#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

vector<int>solution(string s) {

	map <char, int> book;

	vector<int> ans;

	for (int i = 0; i < s.length(); i++) {

		if (book.find(s[i]) == book.end()) {
			book[s[i]] = i;
			ans.push_back(-1);
		}
		else
		{
			ans.push_back(i - book[s[i]]);
			book[s[i]] = i;
		}

	}

	return ans;

}