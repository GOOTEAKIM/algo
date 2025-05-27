#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<int>> dist;

int dx[] = { 1,-1,0,0,1,-1,1,-1 };
int dy[] = { 0,0,1,-1,1,-1,-1,1 };

int main() {

	cin >> n >> m;

	alis.resize(n, vector<int>(m));

	dist.assign(n, vector<int>(m, -1));

	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> alis[i][j];

			if (alis[i][j] == 1) {
				q.push({ i,j });

				dist[i][j] = 0;
			}
		}
	}

	int ans = 0;

	while (!q.empty()) {

		auto [y, x] = q.front();

		q.pop();

		for (int i = 0; i < 8; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny >= 0 && ny < n && nx >= 0 && nx < m) {

				if (dist[ny][nx] == -1) {

					dist[ny][nx] = dist[y][x] + 1;
					
					ans = max(ans, dist[ny][nx]);

					q.push({ ny,nx });

				}

			}

		}

	}

	cout << ans;

	return 0;
}