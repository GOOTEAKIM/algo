#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int dx[] = { 1,-1,0,0 , 1,1,-1,-1};
int dy[] = { 0,0,1,-1 ,1,-1,1,-1};

vector<vector<int>> alis;

vector<vector<bool>> visited;

int ans = 0;

int w, h;

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

			if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
				if (!visited[nx][ny] && alis[nx][ny] == 1) {
					q.push({ nx,ny });

					visited[nx][ny] = true;
				}
			}
		}


	}
	ans++;
}

int main() {

	while (true) {
	

		cin >> w >> h;

		if (w == 0 && h == 0) break;

		alis.clear();

		alis.resize(h, vector<int>(w));

		visited.clear();

		visited.assign(h, vector<bool>(w, false));

		ans = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> alis[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (alis[i][j] == 1 && !visited[i][j]) {
					bfs(i, j);
				}
			}
		}

		cout << ans << "\n";
	}

	return 0;
}