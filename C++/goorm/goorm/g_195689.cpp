#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dy[] = { -1, -1, -1, 0, 0, 1, 1, 1 };

int n, k;

vector<vector<int>> alis;

int main() {

	cin >> n >> k;

	alis.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];
		}
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			int now = alis[i][j];

			int cnt = 0;

			if (now == 0) {

				for (int p = 0; p < 8; p++) {
					int ny = i + dy[p];
					int nx = j + dx[p];

					if (ny >= 0 && ny < n && nx >= 0 && nx < n) {

						if (alis[ny][nx] == 1) cnt++;

					}
				}

			}
			if (cnt == k) ans++;
		}
	}

	cout << ans;

	return 0;
}