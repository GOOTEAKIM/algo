#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ans = 0;

vector<vector<int>> alis(5, vector<int>(5, 0));
vector<vector<bool>> visited(5, vector<bool>(5, false));

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int bfs(int y, int x) {

	queue<pair<pair<int, int>, int>> q;

	q.push({ { y,x }, 0 });

	visited[y][x] = true;

	while (!q.empty()) {

		int now_y = q.front().first.first;
		int now_x = q.front().first.second;

		int dist = q.front().second;

		q.pop();

		if (alis[now_y][now_x] == 1) return dist;

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < 5 && nx >= 0 && nx < 5) {

				if (!visited[ny][nx] && alis[ny][nx] != -1) {
					visited[ny][nx] = true;
					q.push({ {ny,nx}, dist + 1 });
				}

			}

		}

	}

	return -1;
}

int main() {

	int des_y = 0, des_x = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			int num;

			cin >> num;

			if (num == 1) des_y = i, des_x = j;

			alis[i][j] = num;
		}
	}

	int y, x;

	cin >> y >> x;

	cout << bfs(y, x);

	return 0;
}