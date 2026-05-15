#include <iostream>
#include <string>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	int ans = 0;

	for (int i = 1; i <= n; i++) {

		if (i == k) ans++;

		if (i >= 10) {

			string now = to_string(i);

			int len = now.length();

			for (int j = 0; j < len; j++) {

				if (now[j] == k + '0') ans++;

			}

		}

	}

	cout << ans;

	return 0;
}