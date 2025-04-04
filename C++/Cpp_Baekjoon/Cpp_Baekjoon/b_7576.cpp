#include <iostream>
#include <vector>
#include<algorithm>
#include<queue>

using namespace std;

int m, n;

vector<vector<int>> alis;

int dx[] = { 1,-1,0,0, };
int dy[] = { 0,0,1,-1 };


int bfs() {

	queue<pair<int, int>> q;

	int days = -1; // 날짜, 모든 토마토가 다 익었을 수도 있으니까 -1, 어짜피 날짜는 1 증가

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (alis[i][j] == 1) { 
				q.push({ i,j }); // 익은 토마토 추가
			}
		}
	}

	while (!q.empty()) {

		int len = q.size();

		days++;

		for (int i = 0; i < len; i++) { 
			// q 라서 q.front(), 이런식으로 접근해야한다

			int y = q.front().first;
			int x = q.front().second;

			q.pop();

			for (int i = 0; i < 4; i++) {

				int ny = y + dy[i];
				int nx = x + dx[i];

				if (ny >= 0 && ny < n && nx >= 0 && nx < m && alis[ny][nx] == 0) { // 범위 안에 있고

					alis[ny][nx] = 1;

					q.push({ ny,nx });
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (alis[i][j] == 0) {
				return -1;
			}
		}
	}

	return days;
}

int main() {

	cin >> m >> n;

	alis.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> alis[i][j];
		}
	}

	cout << bfs();

	return 0;
}