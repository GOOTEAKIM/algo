#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int OFFSET = 500;
const int GRID = 1001;

int x, y, n;

vector<vector<int>> alis(GRID, vector<int>(GRID, 0));
vector<vector<bool>> visited(GRID, vector<bool>(GRID, false));

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void bfs(int start_y, int start_x) {

	queue<pair<int, int>> q;

	visited[start_y][start_x] = true;

	q.push({ start_y,start_x });

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			
			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny == y + OFFSET && nx == x + OFFSET) {
				alis[ny][nx] = alis[now_y][now_x] + 1;
				return;
			}

			if (nx >= 0 && nx < GRID && ny >= 0 && ny < GRID) {

				if (alis[ny][nx] != -1 && !visited[ny][nx]) {

					visited[ny][nx] = true;

					alis[ny][nx] = alis[now_y][now_x] + 1;

					q.push({ ny,nx });

				}

			}

		}

	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> x >> y >> n;

	for (int i = 0; i < n; i++) {

		int a, b;

		cin >> a >> b;

		alis[b + OFFSET][a + OFFSET] = -1; // y x

	}

	bfs(OFFSET, OFFSET);

	cout << alis[y + OFFSET][x + OFFSET]; // y x

	return 0;
}