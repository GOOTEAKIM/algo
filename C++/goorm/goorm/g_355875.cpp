#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	bool isOne = false;

	int cnt = 0;

	int ans = 0;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		if (num == 1) {

			if (!isOne) isOne = true;

			cnt++;

		}
		else {
			if (cnt > ans) ans = cnt;

			cnt = 0;
			isOne = false;
		}

	}

	if (cnt > ans) ans = cnt;

	cout << ans;

	return 0;
}