#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

vector<vector<int>> alis;

vector<vector<bool>> visited;

int ans = 0;

int bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	int total = 1;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < n && nx >= 0 && nx < m) { // 범위 내에 있다면

				if (!visited[ny][nx]) { // 방문하지 않았다면

					if (alis[ny][nx] == 0) {

						q.push({ ny,nx });

						visited[ny][nx] = true;

						total += 1;

					}
					else if (alis[ny][nx] == 2) {

						q.push({ ny,nx });

						visited[ny][nx] = true;

						total -= 2;

					}
				}
			}
		}
	}

	return total;
}

int main() {

	cin >> n >> m;

	alis.resize(n, vector<int>(m));

	visited.assign(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			cin >> alis[i][j];

		}
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (!visited[i][j] && alis[i][j] == 0) {

				int cnt = bfs(i, j);

				if (cnt > ans) ans = cnt;

			}
		}
	}

	cout << ans;

	return 0;
}