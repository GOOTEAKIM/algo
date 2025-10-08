#include <iostream>
#include <vector>

using namespace std;

int main() {

	int t;

	cin >> t;

	while (t--) {

		int n, k;

		cin >> n >> k;

		int ans = k * k;

		vector<vector<int>> alis(n, vector<int>(n, 0));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> alis[i][j];
			}
		}

		// 모든 k x k 정사각형 영역을 확인
		for (int i = 0; i <= n - k; i++) {

			for (int j = 0; j <= n - k; j++) {

				int cnt = 0;

				for (int x = 0; x < k; x++) {

					for (int y = 0; y < k; y++) {

						if (alis[i + x][j + y] == 1) cnt++;

					}
				}

				if (cnt < ans) {
					ans = cnt;
				}
			}
		}

		cout << ans << "\n";

	}

	return 0;
}