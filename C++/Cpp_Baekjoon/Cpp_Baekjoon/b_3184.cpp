#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int h, w;

vector<vector<char>> alis;

vector<vector<bool>> visited;

int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (nx >= 0 && nx < w && ny >= 0 && ny < h) {
				if (alis[ny][nx] == '#' && !visited[ny][nx]) {
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

	int t;

	cin >> t;

	while (t--) {

		cin >> h >> w;

		int ans = 0;

		alis.clear();
		visited.clear();

		alis.resize(h, vector<char>(w));

		visited.assign(h, vector<bool>(w, false));

		for (int i = 0; i < h; i++) {

			string word;

			cin >> word;

			for (int j = 0; j < w; j++) {
				alis[i][j] = word[j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (alis[i][j] == '#' && !visited[i][j]) {
					bfs(i, j);
					ans++;
				}
			}
		}

		cout << ans << "\n";

	}

	return 0;
}