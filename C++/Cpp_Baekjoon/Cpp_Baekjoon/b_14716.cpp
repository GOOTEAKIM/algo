#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

int dx[] = { 1,-1,0,0,1,1,-1,-1 };
int dy[] = { 0,0,1,-1,1,-1,1,-1 };

vector<vector<int>> alis;

vector<vector<bool>> visited;

int ans = 0;

void bfs(int x, int y) {

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = true;

	while (!q.empty()) {

		pair<int, int> now = q.front();

		int now_x = now.first;
		int now_y = now.second;

		q.pop();

		for (int i = 0; i < 8; i++) {
			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (alis[nx][ny] == 1 && !visited[nx][ny]) {
					q.push({ nx,ny });

					visited[nx][ny] = true;
				}
			}
		}

	}
	ans++;
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
			if (alis[i][j] == 1 && !visited[i][j]) {
				bfs(i, j);
			}
		}
	}

	cout << ans;

	return 0;
}