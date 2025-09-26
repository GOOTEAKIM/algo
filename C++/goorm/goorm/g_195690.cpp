#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	int ans = 0;

	while (n > 0) {

		if (n >= 14) {

			ans += (n / 14);
			n %= 14;

		}
		else if (n >= 7) {

			ans += (n / 7);
			n %= 7;

		}
		else {

			ans += n;
			n = 0;
		}
	}

	cout << ans;

	return 0;
}