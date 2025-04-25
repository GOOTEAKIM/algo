#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int m, n;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (alis[ny][nx] == 0 && !visited[ny][nx]) {

					q.push({ ny,nx });

					visited[ny][nx] = true;
				}
			}

		}


	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;

	alis.resize(m, vector<int>(n));

	visited.assign(m, vector<bool>(n, false));

	for (int i = 0; i < m; i++) {

		// 인풋 받는게 문제였다. 문자열로 받아야함

		string row;
		cin >> row;

		for (int j = 0; j < n; j++) {
			alis[i][j] = row[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) {
	
		if (alis[0][i] == 0 && !visited[0][i]) {

			bfs(0,i);

		}
		
	}

	for (int i = 0; i < n; i++) {
		if (visited[m-1][i]) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}