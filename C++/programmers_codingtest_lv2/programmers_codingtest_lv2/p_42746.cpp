#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
	return a + b > b + a;
}

string solution(vector<int> numbers) {

	string ans = "";

	vector<string> strNumbers;

	for (int num : numbers) {
		strNumbers.push_back(to_string(num));
	}

	sort(strNumbers.begin(), strNumbers.end(), cmp);

	if (strNumbers[0] == "0") {
		return "0";
	}

	for (auto word : strNumbers) {
		ans += word;
	}

	return ans;
}