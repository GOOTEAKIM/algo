#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {

	vector<string> ans;

	for (string sentence : quiz) {

		stringstream ss(sentence);

		int X, Y, Z;
		char op, eq;

		ss >> X >> op >> Y >> eq >> Z;

		int result = (op == '+') ? (X + Y) : (X - Y);

		if (result == Z) {
			ans.push_back("O");
		}
		else
		{
			ans.push_back("X");
		}

	}

	return ans;
}
