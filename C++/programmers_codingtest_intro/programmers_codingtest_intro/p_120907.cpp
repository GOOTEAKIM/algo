#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {

	vector<string> ans;

	for (string sentence : quiz) {

		stringstream ss(sentence);

		int x, y, z;
		char op, eq;

		ss >> x >> op >> y >> eq >> z;

		int result = (op == '+') ? (x + y) : (x - y);

		if (result == z) {
			ans.push_back("O");
		}
		else
		{
			ans.push_back("X");
		}

	}

	return ans;
}
