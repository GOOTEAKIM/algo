#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool solution(string s) {

	bool ans = true;

	vector<char> arr;

	for (auto spell : s) {

		if (arr.empty()) {

			if (spell == '(') {
				arr.push_back(spell);
			}
			else
			{
				ans = false;
				break;
			}

		}
		else
		{
			if (spell == '(') {
				arr.push_back(spell);
			}
			else
			{
				arr.pop_back();
			}
		}

	}

	if (!arr.empty()) {
		ans = false;
	}

	return ans;
}