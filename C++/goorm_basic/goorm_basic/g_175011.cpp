#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<vector<int>> alis(n, vector<int>(n));

	int y = 0, x = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];

			if (alis[i][j] == 0) {
				y = i;
				x = j;
			}
		}
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			int now = alis[i][j];

			if (i == y || j == x) {
				ans += now;
			}
		}
	}

	cout << ans;

	return 0;

}