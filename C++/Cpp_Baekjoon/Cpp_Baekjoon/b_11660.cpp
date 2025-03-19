#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,m;

	cin >> n >> m;

	vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

	vector<vector<int>> prefix_sum(n + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			cin >> arr[i][j];

			prefix_sum[i][j] = arr[i][j] + prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1];

		}
	}

	for (int i = 0; i < m; i++) {
		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		int result = prefix_sum[x2][y2] - prefix_sum[x1 - 1][y2] - prefix_sum[x2][y1 - 1] + prefix_sum[x1 - 1][y1 - 1];

		cout << result << "\n";
	}

	return 0;
}