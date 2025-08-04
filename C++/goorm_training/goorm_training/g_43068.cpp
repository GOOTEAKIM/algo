#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;
int main() {

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int x, y, n;

		cin >> x >> y >> n;

		int total = abs(x) + abs(y);

		int diff = n - total;

		if (diff == 0) {
			cout << "YES";
		}
		else if (diff < 0) {
			cout << "NO";
		}
		else { // Å©´Ù¸é?

			int cnt = diff % 2;

			if (cnt) {
				cout << "NO";
			}
			else {
				cout << "YES";
			}

		}
		if (i != t - 1) {
			cout << "\n";
		}
	}


	return 0;
}

