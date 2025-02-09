#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(string s) {

	vector<char> arr;

	for (auto spell : s) {
		if (arr.empty()) {
			arr.push_back(spell);
		}
		else
		{
			if (spell == arr.back()) {
				arr.pop_back();
			}
			else
			{
				arr.push_back(spell);
			}
		}
	}

	if (arr.empty()) {
		return 1;
	}
	else
	{
		return 0;
	}

}