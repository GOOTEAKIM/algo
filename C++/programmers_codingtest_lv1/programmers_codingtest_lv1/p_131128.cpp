#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

string solution(string X, string Y) {

	map<char, int> countX, countY;

	for (char c : X) countX[c]++; 
	for (char c : Y) countY[c]++;

	vector<char> commonNumbers;

	for (char c = '0'; c <= '9'; c++) {

		int commonCount = min(countX[c], countY[c]);

		for (int i = 0; i < commonCount; i++) {
			commonNumbers.push_back(c);
		}

	}

	if (commonNumbers.empty()) return "-1";

	sort(commonNumbers.rbegin(), commonNumbers.rend());

	if (commonNumbers[0] == '0') return "0";

	return string(commonNumbers.begin(), commonNumbers.end());

}