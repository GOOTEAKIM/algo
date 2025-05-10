#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

	int n, m;

	cin >> n >> m;

	vector<vector<int>>alis(n + 1, vector<int>(m + 1));
	vector<vector<int>>prefix(n + 1, vector<int>(m + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			cin >> alis[i][j];

			prefix[i][j] = alis[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
			
		}

	}

	int k;

	cin >> k;

	while (k--) {

		int i, j, x, y;

		cin >> i >> j >> x >> y;

		int result = prefix[x][y] - prefix[i - 1][y] - prefix[x][j - 1] + prefix[i - 1][j - 1];

		cout << result << "\n";
	}

	return 0;
}
