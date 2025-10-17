#include <iostream>

using namespace std;

int main() {

	int n, x, y;

	cin >> n >> x >> y;

	for (int i = 1; i <= n; i++) {

		if (i % x == 0 && i % y == 0) {
			cout << "XY";
		}
		else if (i % x == 0) {
			cout << "X";
		}
		else if (i % y == 0) {
			cout << "Y";
		}
		else {
			cout << i;
		}

		if (i != n) cout << "\n";

	}

	return 0;
}