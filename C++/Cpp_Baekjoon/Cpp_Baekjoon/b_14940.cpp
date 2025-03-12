#include <iostream>
#include <vector>
#include<algorithm>
#include<queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<int>> dist;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void bfs(int start_x, int start_y) {

	queue<pair<int, int>> q;

	q.push({ start_x,start_y });

	dist[start_x][start_y] = 0; // 본인은 시작점이니까 0으로 저장
	
	while (!q.empty()) {

		pair<int, int> now = q.front();

		int x = now.first;
		int y = now.second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m && alis[nx][ny] == 1 && dist[nx][ny] == -1) {

				q.push({ nx,ny });

				dist[nx][ny] = dist[x][y] + 1;
			}

		}

	}

}

int main() {

	cin >> n >> m;

	alis.resize(n, vector<int>(m));

	dist.assign(n, vector<int>(m, -1)); // 초기 거리 -1 설정

	int x = 0, y = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> alis[i][j];

			if (alis[i][j] == 2) { // 시작점 찾기

				x = i;
				y = j;
				dist[i][j] = 0;
			}
			else if (alis[i][j] == 0) { // 0이라면 바로 0으로 저장
				dist[i][j] = 0;
			}
		}
	}

	bfs(x, y); // 시작점에서 1인 땅으로 탐색

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dist[i][j] << " ";
		}
		cout << "\n"; // 세로 줄 바꿈
	}

	return 0;
}