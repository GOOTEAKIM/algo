#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;

	cin >> word;

	string ans = "";

	for (auto now : word) {

		char next;

		if (islower(now)) next = toupper(now);
		else next = tolower(now);

		ans += next;

	}

	cout << ans;

	return 0;
}