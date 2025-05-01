#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

int r1, c1, r2, c2;

int dx[] = { -2,-2,0,0,2,2, };
int dy[] = { -1,1,-2,2,-1,1 };

vector<vector<int>> visited;

int bfs(int x, int y) {

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = 0;

	while (!q.empty()) {

		int now_x = q.front().first;
		int now_y = q.front().second;

		if (now_x == r2 && now_y == c2) {
			return visited[now_x][now_y];
		}

		q.pop();

		for (int i = 0; i < 6; i++) {

			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
				if (visited[nx][ny] == -1) {

					q.push({ nx,ny });

					visited[nx][ny] = visited[now_x][now_y] + 1;

				}
			}

		}

	}
	
	return -1;
}

int main() {

	cin >> n;

	cin >> r1 >> c1 >> r2 >> c2;

	visited.assign(n,vector<int>(n,-1));

	int ans = bfs(r1, c1);

	cout << ans;

	return 0;
}