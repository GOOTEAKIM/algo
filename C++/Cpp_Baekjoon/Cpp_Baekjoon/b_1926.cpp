#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<bool>> visited;

vector<int> ans;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };	

int bfs(int x, int y) {

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = true;

	int area = 1;

	while (!q.empty()) {

		pair<int, int> now = q.front();

		int now_x = now.first;
		int now_y = now.second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {

				if (visited[nx][ny] == false && alis[nx][ny] == 1) {

					q.push({ nx,ny });

					visited[nx][ny] = true;
					area++;
				}

			}
		}

	}
	return area;
}

int main() {

	cin >> n >> m;
	
	alis.resize(n, vector<int>(m));

	visited.assign(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> alis[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false && alis[i][j] == 1) {
				int area = 0;

				area = bfs(i, j);

				ans.push_back(area);
			}
		}
	}

	if (ans.empty()) { // 그림이 하나도 없는 경우
		cout << 0 << "\n";
		cout << 0 << "\n";
	}

	else
	{
		cout << ans.size() << "\n";

		cout << *max_element(ans.begin(), ans.end()) << "\n";
	}

	return 0;
}