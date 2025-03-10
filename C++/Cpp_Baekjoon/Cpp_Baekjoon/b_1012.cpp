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

void bfs(int x, int y) {

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = true;

	while (!q.empty()) {

		pair<int,int> now = q.front();

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

				}
			}
		}
 
	}
}


int main() {

	int t;
	
	cin >> t;

	while (t--) {

		int k;

		cin >> m >> n >> k;

		alis.assign(n, vector<int>(m, 0));
		
		visited.assign(n, vector<bool>(m, false));

		for (int i = 0; i < k; i++) {
			int from, to;

			cin >> from >> to;

			alis[to][from] = 1;
		}

		int cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (visited[i][j] == false && alis[i][j] == 1) {
					bfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}