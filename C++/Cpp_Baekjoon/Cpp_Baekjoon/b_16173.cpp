#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int dy[] = { 0,1 };
int dx[] = { 1,0 };

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	while (!q.empty()) {

		pair<int, int> now = q.front();

		int now_y = now.first;
		int now_x = now.second;

		q.pop();

		int cost = alis[now_y][now_x];
	
		if (cost == -1) continue;

		for (int i = 0; i < 2; i++) {

			int ny = now_y + dy[i] * cost;
			int nx = now_x + dx[i] * cost;

			if (ny >= 0 && ny < n && nx >= 0 && nx < n && !visited[ny][nx]) {

				q.push({ ny,nx });

				visited[ny][nx] = true;
			}

		}


	}

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

	bfs(0,0);

	if (visited[n - 1][n - 1]) {
		cout << "HaruHaru";
	}
	else
	{
		cout << "Hing";
	}

	return 0;
}