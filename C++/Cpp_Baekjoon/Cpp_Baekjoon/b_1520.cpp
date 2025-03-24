#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<int>> dp;

// 방향이 4개

int dy[] = { 0,0,1 ,-1};
int dx[] = { 1,-1,0,0 };


int dfs(int y, int x) {

	if (y == n - 1 && x == m - 1) {
		
		return 1;
	}

	if (dp[y][x] != -1) {
		return dp[y][x];
	}

	dp[y][x] = 0;

	int now = alis[y][x];

	for (int i = 0; i < 4; i++) {
		int now_y = y + dy[i];
		int now_x = x + dx[i];


		if (now_y >= 0 && now_y < n && now_x >= 0 && now_x < m && alis[now_y][now_x] < now) {
			dp[y][x] += dfs(now_y, now_x);
		}
	}
	return dp[y][x];
}

int main() {

	cin >> n >> m;
	
	alis.resize(n, vector<int>(m));

	dp.assign(n, vector<int>(m, -1));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> alis[i][j];
		}
	}

	cout << dfs(0, 0);

	return 0;
}