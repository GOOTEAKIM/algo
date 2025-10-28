#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

vector<string> alis;

vector<vector<bool>> visited;

int n, m;

int cnt = 0, cost = 0;

void bfs(int y, int x) {

	cnt++;

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	int value = 1;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < m && nx >= 0 && nx < n) {
				if (alis[ny][nx] == '#' && !visited[ny][nx]) {

					q.push({ ny,nx });

					visited[ny][nx] = true;

					value++;
				}
			}

		}
	}

	if (value > cost) cost = value;
}

int main() {

	cin >> n >> m;

	alis.resize(m);

	visited.assign(m, vector<bool>(n, false));

	for (int i = 0; i < m; i++) {

		string word;

		cin >> word;

		alis[i] = word;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			char now = alis[i][j];

			if (now == '#' && !visited[i][j]) {
				bfs(i, j);
			}
		}
	}

	cout << cnt << "\n" << cost;

	return 0;
}