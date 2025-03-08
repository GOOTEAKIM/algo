#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int r, c;

vector<vector<char>> alis;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

bool visited[26];

int ans = 0;

void dfs(int x, int y, int count) {

	ans = max(ans, count);

	int num = alis[x][y] - 'A';

	visited[num] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < r && ny >= 0 && ny < c) {

			int next = alis[nx][ny] - 'A';

			if (!visited[next]) {
				dfs(nx, ny, count + 1);
			}
		}
	}

	visited[num] = false; // น้ฦฎ

}

int main() {

	cin >> r >> c;

	alis.resize(r, vector<char>(c));

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> alis[i][j];
		}
	}

	dfs(0, 0, 1);

	cout << ans;

	return 0;
}