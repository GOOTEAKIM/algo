#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n;

vector<vector<int>> alis;
vector<vector<bool>> visited;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int ans = 0;

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	visited[y][x] = true;

	q.push({ y,x });

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < n && nx >= 0 && nx < n) {

				if (!visited[ny][nx] && alis[ny][nx] == 1) {

					q.push({ ny,nx });

					visited[ny][nx] = true;

				}

			}
		}
	}

	ans++;

}


int main() {

	cin >> n;

	alis.resize(n, vector<int>(n));

	visited.assign(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];
		}
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			if (!visited[i][j] && alis[i][j] == 1) {
				bfs(i, j);
			}

		}
	}

	cout << ans;

	return 0;
}