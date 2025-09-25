#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string word;

	cin >> word;

	int ans = 0;

	int gold = 0, silver = 0;

	int len = word.length();

	for (int i = 0; i < len - 2; i++) {

		string now = word.substr(i, 2);
		string rest = word.substr(i + 2);

		string target = "";

		if (now == "12") target = "21";
		else if (now == "21") target = "12";

		if (!target.empty() && rest.find(target) != string::npos) {

			cout << "Yes";
			return 0;

		}

	}

	cout << "No";

	return 0;
}