#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	string word;

	cin >> word;

	int ans = 0;

	int cnt = 0;

	for (auto next : word) {

		if (next == 'O') cnt++;

		else {

			if (cnt == 0) continue;

			for (int i = 1; i <= cnt; i++) ans += i;

			cnt = 0;
		}

	}

	if (cnt != 0) for (int i = 1; i <= cnt; i++) ans += i;

	cout << ans;

	return 0;
}