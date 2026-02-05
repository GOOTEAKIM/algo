#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<vector<char>> alis(n, vector<char>(n, 'O'));

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			if (i % 2 == 0) {

				if (j % 2 == 1) {
					alis[i][j] = 'X';
				}
				else {
					alis[i][j] = 'O';
				}

			}
			else {

				if (j % 2 == 1) {
					alis[i][j] = 'O';
				}
				else {
					alis[i][j] = 'X';
				}

			}

		}

	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			cout << alis[i][j];

		}

		if (i != n - 1) cout << "\n";

	}

	return 0;
}