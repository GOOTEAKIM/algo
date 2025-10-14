#include <iostream>
#include <string>

using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {

		string num;

		cin >> num;

		int ans = 0;

		for (int j = 0; j < 7; j += 2) {

			int now = num[j] - '0';

			ans += now;

		}

		for (int k = 1; k < 7; k += 2) {

			int now = num[k] - '0';

			if (now != 0) {
				ans *= now;
			}

		}

		ans %= 10;

		cout << ans << "\n";
	}

	return 0;
}