#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

// 동 서 남 북
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };


int dfs(int x, int y) {

	alis[x][y] = 0; // 방문 처리

	int size = 1; // 본인 크기

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		// 상하좌우 탐색했을 때 차 있는 곳 발견?
		if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && alis[nx][ny] == 1) {
			size += dfs(nx, ny); // dfs 탐색
		}

	}
	return size;
}

int main() {

	int k;

	cin >> n >> m >> k;

	// 2차원 배열로 할당
	alis.assign(n + 1, vector<int>(m + 1, 0));

	int garbage = 0; // 음식물 크기

	// 배열 채우기
	for (int i = 0; i < k; i++) {
		int from, to;

		cin >> from >> to;

		alis[from][to] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			// dfs로 완전탐색 
			if (alis[i][j] == 1) { // 1인 경우
				garbage = max(garbage, dfs(i, j));
			}
		}
	}

	cout << garbage;

	return 0;
}

/*
0	0	0	0	0
0	1	0	0	0
0	0	1	1	0
0	1	1	0	0
0	0	0	0	0	
*/