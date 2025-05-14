#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<vector<int>> alis(n + 1, vector<int>(m + 1, 0));
	vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			cin >> alis[i][j];

			prefix[i][j] = alis[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];

		}
	}

	int k;

	cin >> k;

	while (k--) {

		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		long long sum = prefix[x2][y2] + prefix[x1 - 1][y1 - 1] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1];

		cout << sum << "\n";

	}

	return 0;
}