#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

vector<vector<char>> alis;

vector<vector<bool>> visited_normal, visited_abnormal;

// µ¿¼­³²ºÏ
int dx [] = {1,-1,0,0};
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y, char color) {

	visited_normal[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (!visited_normal[nx][ny] && alis[nx][ny] == color) {
				dfs(nx, ny, color);
			}
		}
	}
}

void dfs_abnormal(int x, int y, char color) {

	visited_abnormal[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (!visited_abnormal[nx][ny]) {
				if (color == 'R' || color == 'G') {
					if (alis[nx][ny] != 'B') {
						dfs_abnormal(nx, ny, color);
					}
				}
				else if (alis[nx][ny] == 'B') {
					dfs_abnormal(nx, ny, color);
				}
			}
		}
	}

}

int main() {

	cin >> n;

	alis.assign(n, vector<char>(n));

	visited_normal.assign(n, vector<bool>(n, false));
	visited_abnormal.assign(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];
		}
	}

	int ans_normal = 0;
	int ans_abnormal = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited_normal[i][j]) {
				dfs(i, j, alis[i][j]);
				ans_normal++;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited_abnormal[i][j]) {
				dfs_abnormal(i, j, alis[i][j]);
				ans_abnormal++;
			}
		}
	}

	cout << ans_normal << " " << ans_abnormal;

	return 0;
}