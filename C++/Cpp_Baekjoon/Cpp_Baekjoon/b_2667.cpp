#pragma warning(disable:4996)
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

int dx[] = { 1,-1,0,0};
int dy[] = { 0,0,1,-1 };

int alis[25][25];

bool visited[25][25];

vector<int> ans;

void bfs(int x, int y) {

	queue<pair<int, int>> q;

	q.push({ x,y });

	visited[x][y] = true;

	int cnt = 0;

	cnt++;

	while (!q.empty()) {

		pair<int, int> now = q.front();

		int now_x = now.first;
		int now_y = now.second;

		q.pop();


		for (int i = 0; i < 4; i++) {
			int nx = now_x + dx[i];
			int ny = now_y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (visited[nx][ny] == false && alis[nx][ny] == 1) {

					q.push({ nx, ny });
					visited[nx][ny] = true;
					cnt++;
				}

			}
		}

	}
	ans.push_back(cnt);
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &alis[i][j]); // 띄어쓰기 없이 input 받기
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == false && alis[i][j] == 1) { // 방문하지 않았고 1일때만 탐색
				bfs(i, j);
			}
		}
	}

	sort(ans.begin(), ans.end()); // 정렬

	cout << ans.size() << "\n";

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}
}