#include <iostream>

using namespace std;
int main() {

	int k;

	cin >> k;

	int preprev = 0;
	int prev = 1;

	if (k == 1) {
		cout << 0;
	}
	else if (k == 2) {
		cout << 1;
	}
	else {

		int ans = 0;

		for (int i = 3; i <= k; i++) {

			ans = (prev + preprev) % 1000000007;
			preprev = prev;
			prev = ans;
		}
		cout << ans;
	}

	return 0;
}

// 0 1 1 2 3 5 