#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

int dy[] = { 0,1 };
int dx[] = { 1,0 };

vector<vector<int>> alis;
vector<vector<bool>> visited;

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 2; i++) {
			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < m && nx >= 0 && nx < n) {

				if (alis[ny][nx] == 1 && !visited[ny][nx]) {
					q.push({ ny,nx });

					visited[ny][nx] = true;
				}

			}

		}

	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	alis.resize(m, vector<int>(n));

	visited.assign(m, vector<bool>(n, false));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];
		}
	}

	bfs(0, 0); // 시작점에서 한번만 돌리면 된다.

	if (visited[m - 1][n - 1]) cout << "Yes";
	
	else cout << "No";

	return 0;
}