#include <iostream>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {

		if (i % 2 == 0) { // Â¦¼ö
			for (int j = 0; j < m; j++) {
				cout << "#";
			}
		}
		else { // È¦¼ö

			int now = (i + 1) / 2;

			if (now % 2 != 0) {
				for (int j = 0; j < m; j++) {
					if (j != m - 1) {
						cout << ".";
					}
					else {
						cout << "#";
					}
				}
			}
			else {
				for (int j = 0; j < m; j++) {
					if (j == 0) {
						cout << "#";
					}
					else {
						cout << ".";
					}
				}
			}

		}

		if (i != n - 1) cout << "\n";

	}

	return 0;
}