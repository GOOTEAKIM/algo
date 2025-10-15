#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		for (int j = 0; j < n; j++) {
			if (j == i - 1 || j == n - i) {
				cout << i;
			}
			else {
				cout << 0;
			}
		}

		if (i != n) cout << "\n";
	}

	return 0;
}