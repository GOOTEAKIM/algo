#include <iostream>

using namespace std;

int main() {

	int n;

	string word;

	cin >> n >> word;

	char now = word[0];

	int ans = 1;

	for (int i = 1; i < n; i++) {

		char next = word[i];

		if (next != now) {
			now = next;
			ans++;
		}

	}

	cout << ans;

	return 0;
}