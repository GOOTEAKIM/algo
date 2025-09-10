#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;

	string s;

	cin >> n >> s;

	int len = s.length();

	int ans = 0;

	for (int i = 0; i < n; i++) {

		string name;

		cin >> name;

		if (name == s) {

			ans++;

		}
		else {

			if (name.length() < s.length()) continue;

			for (int i = 0; i <= name.length() - len; i++) {
				if (name.substr(i, len) == s) {
					ans++;
					break;
				}
			}
		}

	}

	cout << ans;

	return 0;
}