#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;

	cin >> n >> m >> k;
	
	int ans = 0;

	vector<vector<int>> arr(n, vector<int>(m));

	string line;

	for (int i = 0; i < n; i++) {

		cin >> line;

		for (int j = 0; j < m; j++) {

			arr[i][j] = line[j] - '0';

		}

		int window = 0;

		for (int j = 0; j < k; j++) {
			window += arr[i][j];
		}

		if (window == 0) ans++;

		for (int p = k; p < m; p++) {
			window += arr[i][p] - arr[i][p - k];

			if (window == 0) ans++;
		}

	}

	cout << ans;

	return 0;
}