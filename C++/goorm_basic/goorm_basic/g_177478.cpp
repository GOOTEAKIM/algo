#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;

vector<vector<int>> alis;
vector<vector<bool>> visited;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int bfs(int y, int x) {

	int cnt = 1;

	int cost = alis[y][x];

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		int now = alis[now_y][now_x];

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < n && nx >= 0 && nx < n) {

				if (!visited[ny][nx]) { // 방문 안하고

					int next = alis[ny][nx];

					if (next == now) { // 값이 같다면?

						q.push({ ny,nx });

						visited[ny][nx] = true;

						cnt++;
					}

				}
			}
		}

	}
	return cnt;

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	alis.resize(n, vector<int>(n));
	visited.assign(n, vector<bool>(n, false));

	int y, x;
	cin >> y >> x;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];
		}
	}

	int target = alis[y - 1][x - 1]; // 인덱스라서 각 좌표에 -1 하는 것 중요!

	int max_cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (!visited[i][j] && alis[i][j] == target) { // 방문하지 않고 타겟이랑 같은 값이라면?

				int ans = bfs(i, j);

				if (ans > max_cnt) {
					max_cnt = ans;
				}

			}
		}
	}

	cout << max_cnt;

	return 0;
}