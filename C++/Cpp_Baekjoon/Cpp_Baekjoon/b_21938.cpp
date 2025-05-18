#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int ans = 0;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void bfs(int y,int x) {

	queue<pair<int, int>> q; // y, x

	visited[y][x] = true;

	q.push({ y,x });

	ans++;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (nx >= 0 && nx < m && ny >= 0 && ny < n) {

				if (!visited[ny][nx] && alis[ny][nx] == 255) {

					visited[ny][nx] = true;

					q.push({ ny,nx });
				}

			}
		}

	}

}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	alis.resize(n, vector<int>(m));

	visited.assign(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {
			
			int r, g, b;

			cin >> r >> g >> b;

			int avg = (r + g + b) / 3;

			alis[i][j] = avg;
		}

	}

	int t;

	cin >> t;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (alis[i][j] >= t) {
				alis[i][j] = 255;
			}

			else
			{
				alis[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (alis[i][j] == 255 && !visited[i][j]) {
				bfs(i, j);
			}

		}
	}

	cout << ans;

	return 0;
}

/*
255	 0	255
 0	255	 0
255	 0	255
*/