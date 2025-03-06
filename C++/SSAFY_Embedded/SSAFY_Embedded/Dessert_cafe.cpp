#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n;
int m[30][30];

// 우하 좌하 좌상 우상
int dr[] = { 1, 1, -1,-1 };
int dc[] = { 1,-1,-1,1 };

int visited[110]; // index = 디저트 종류, value = 경로상에 있는가

int destRow, destCol; 

vector<int> path;

int ans;

void input() {

	// 초기화
	memset(visited, 0, sizeof(visited));

	path.clear();

	ans = 0;

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			m[i][j] = -1;
		}
	}

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> m[i][j];
		}
	}

}

void dfs(int row, int col, int dir) {
	
	// 기저조건

	if (row == destRow && col == destCol) {

		if (ans < path.size()) {
			ans = path.size();
		}
		return;
	}

	for (int ndir = dir; ndir <= dir + 1; ndir++) {
		
		if (ndir >= 4) continue;
		
		int nr = row + dr[ndir];
		int nc = col + dc[ndir];
	
		// 판별
		if (m[nr][nc] == 1) continue; // 맵을 벗어남

		if (visited[m[nr][nc]] == 1) continue; // 이미 방문한 곳

		// 기록 및 처리
		visited[m [nr][nc]] = 1;
		path.push_back(m[nr][nc]);

		// 가라
		dfs(nr,nc,ndir);

		// 복구
		visited[m[nr][nc]] = 0;
		path.pop_back();
	}

	if (ans < 4) {
		ans = -1; // 사각형이 안된 경우
	}
}

void solution() {
	// 모든 다양한 경로를 모두 해보기

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n; col++) {
			// 도착지
			destRow = row + 1;
			destCol = col - 1;

			// 기록 및 처리
			visited[m[row][col]] = 1;
			path.push_back(m[row][col]);

			dfs(row, col, 0);

			// 복구
			visited[m[row][col]] = 0;
			path.pop_back();
		}
	}

}

int main() {

	int t;
	
	cin >> t;

	for (int tc = 1; tc <= t; tc++) {

		input();
		solution();

		cout << "#" << tc << " " << ans << "\n";

	}
	return 0;
}