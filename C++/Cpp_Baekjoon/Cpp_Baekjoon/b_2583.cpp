#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int m,n;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int bfs(int x, int y) {

	int area = 0;

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = true;

	while (!q.empty()) {

		pair<int,int> now = q.front();

		int now_x = now.first;
		int now_y = now.second;

		q.pop();

		area++; // 면적 추가

		for (int i = 0; i < 4; i++) {
			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
				if (!visited[nx][ny] && alis[nx][ny] == 0) {
					q.push({ nx,ny });

					visited[nx][ny] = true;
				}
			}
		}

	}

	return area;
}



int main() {

	int k;

	cin >> m >> n >> k;

	alis.assign(m, vector<int>(n, 0));

	visited.assign(m, vector<bool>(n, false));

	vector<int> ans;

	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++) {
			for (int k = x1; k < x2; k++) {
				alis[j][k] += 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if (!visited[i][j] && alis[i][j] == 0) {
				int area = bfs(i, j);

				ans.push_back(area);
			}


		}
	}

	sort(ans.begin(), ans.end());

	cout << ans.size() << "\n";

	for (int i = 0; i < ans.size(); i++) {

		cout << ans[i];

		if (i == ans.size() - 1) continue;

		cout << " ";
	}

	return 0;
}