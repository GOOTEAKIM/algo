#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int t;

	cin >> t;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (t--) {

		int n;

		cin >> n;

		vector<vector<int>> arr(2, vector<int>(n));

		vector<vector<int>> dp;

		dp.assign(2, vector<int>(n, 0));

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];

		dp[0][1] = arr[0][1] + dp[1][0];
		dp[1][1] = arr[1][1] + dp[0][0];

		for (int j = 2; j < n; j++) {

			dp[0][j] = max(dp[1][j - 2], dp[1][j - 1]) + arr[0][j];
			dp[1][j] = max(dp[0][j - 2], dp[0][j - 1]) + arr[1][j];

		}
		
		cout << max(dp[0][n-1], dp[1][n-1]) << "\n";

	}

	return 0;
}