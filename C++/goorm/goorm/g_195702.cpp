#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, k, q;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

vector<string> alis;
vector<vector<bool>> visited;

void bfs(int y, int x, char order) {

	y -= 1, x -= 1;

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;
	alis[y][x] = order;

	int cnt = 1;

	vector<pair<int, int>> arr;

	arr.push_back({ y,x });

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (!visited[ny][nx] && alis[ny][nx] == order) {

					q.push({ ny,nx });
					visited[ny][nx] = true;
					alis[ny][nx] = order;
					arr.push_back({ ny,nx });
					cnt++;

				}

			}

		}
	}

	if (cnt >= k) {

		for (auto next : arr) {

			alis[next.first][next.second] = '.';
			visited[next.first][next.second] = false;

		}
	}
	else {

		for (auto next : arr) {

			visited[next.first][next.second] = false;

		}
	}

}

int main() {

	cin >> n >> k >> q;

	alis.resize(n);
	visited.assign(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	for (int i = 0; i < q; i++) {

		int y, x;
		char order;

		cin >> y >> x >> order;

		bfs(y, x, order);

	}

	for (string next : alis) {
		cout << next << "\n";
	}

	return 0;
}

// AB..C
// BBAZZ
// ....A
// BBB.B
// CCBAB

// AB..C
// BBAZZ
// A.AAA
// BBB.B
// CCBAB

// AD..C
// ...ZZ
// .....
// ....B
// CC.AB