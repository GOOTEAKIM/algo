#include <iostream>
#include <vector>

using namespace std;

int main() {

	int t;

	cin >> t;

	while (t--) {

		int r, c;

		cin >> r >> c;

		vector<vector<char>> alis(r, vector<char>(c));

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> alis[i][j];
			}
		}

		int ans = 0;

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {

				if (alis[i][j] == '>') {

					// 범위 내 라면?

					if ((j + 2) <= c-1) {

						if (alis[i][j + 1] == 'o' && alis[i][j + 2] == '<') {
							ans++;
							j += 2;
						}

					}

				}
				else if (alis[i][j] == 'v') {

					if ((i + 2) <= r - 1) {

						if (alis[i + 1][j] == 'o' && alis[i + 2][j] == '^') ans++;

					}

				}

			}
		}

		cout << ans << "\n";
	}

	return 0;
}