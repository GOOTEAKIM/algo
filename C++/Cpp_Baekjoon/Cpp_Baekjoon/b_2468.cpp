#include <iostream>
#include <vector>
#include<queue>
#include <algorithm>

using namespace std;

int n;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void bfs(int x, int y, int height) {

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = true;

	while (!q.empty()) {

		pair<int, int > now = q.front();

		int now_x = now.first;
		int now_y = now.second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (visited[nx][ny] == false && alis[nx][ny] > height) {

					q.push({ nx,ny });

					visited[nx][ny] = true;

				}

			}
		}

	}
}

int main() {

	cin >> n;

	alis.resize(n, vector<int>(n));


	int minimum = 101;
	int maximum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];

			if (minimum > alis[i][j]) {
				minimum = alis[i][j];
			}

			if (maximum < alis[i][j]) {
				maximum = alis[i][j];
			}
		}
	}
	
	int ans = 1; // 다 안전한 경우

	for (int k = minimum; k <= maximum; k++) {

		visited.assign(n, vector<bool>(n, false));

		int cnt = 0; // 높이에 따른 안전가옥의 수 카운트

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {

				if (visited[i][j] == false && alis[i][j] > k) {
					bfs(i, j, k);

					cnt++;
				}

			}
		}

		ans = max(ans, cnt); 
	}

	cout << ans << "\n";
	
	return 0;
}