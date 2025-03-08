#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int dx [] = {1,-1,0,0,1,1,-1,-1};
int dy[] = { 0,0,1,-1,1,-1,1,-1 };

bool isPeak;

int cnt = 0;

void dfs(int x, int y) {

	for (int i = 0; i < 8; i++) {
		// 8방향 탐색
		int nx = x + dx[i];
		int ny = y + dy[i];

		// 범위 벗어나면 패스
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

		// 범위는 안벗어 나는데 높이가 더 길면? 
		if (alis[x][y] < alis[nx][ny]) {
			isPeak = false; // 봉우리가 아님
		}

		// 방문한 곳은 패스
		if (visited[nx][ny]) continue;

		if (alis[x][y] == alis[nx][ny]) { // 높이가 같다? == 봉우리
			visited[nx][ny] = true; // 방문 처리
			dfs(nx, ny); // 또 탐색
		}
	}
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
			if (visited[i][j]) continue; // 방문한 곳은 패스

			isPeak = true; // 봉우리다
			visited[i][j] = true; // 방문
			dfs(i, j); // 탐색

			if (isPeak) cnt++; // 탐색해도 봉우리면 카운트 증가
		}
	}


	cout << cnt;

	return 0;
}