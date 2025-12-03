#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	string word;

	cin >> word;

	string ans = "";

	for (int i = 0; i < n; i++) {

		string now = word.substr(i, 2);

		if (now[0] == now[1]) {

			char next = toupper(now[0]);

			ans += next;
			ans += next;

			i++;

		}
		else ans += now[0];

	}

	cout << ans;

	return 0;
}