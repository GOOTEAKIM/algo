#include <iostream>

using namespace std;

int main() {

	int m, s;

	cin >> m >> s;

	int ans = 0;

	for (int i = 1; i <= m; i++) {

		int cnt = 0;

		int now = i;

		while (now > 0) {

			cnt += now % 10;
			now /= 10;

		}

		if (cnt == s) ans++;
	}

	cout << ans;

	return 0;
}