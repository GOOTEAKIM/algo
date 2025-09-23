#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string word;

	cin >> word;

	int len = word.length();

	int ans = 1;

	for (int i = 2; i <= len; i++) {

		for (int j = 0; j <= len - i; j++) {

			string now = word.substr(j, i);

			string next = now;

			reverse(now.begin(), now.end());

			if (now == next) {
				ans = i;
				break;
			}
		}

	}

	cout << ans;

	return 0;
}