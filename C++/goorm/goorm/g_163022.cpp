#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k;

vector<vector<int>> alis;

vector<bool> visited;

int bfs(int x) {

	queue<pair<int, int>> q; // 위치, 깊이

	visited[x] = true;

	q.push({ x,0 }); // 처음엔 깊이가 없다

	while (!q.empty()) {

		int now = q.front().first;
		int depth = q.front().second;

		q.pop();

		for (int next : alis[now]) {

			if (next == k) {
				return depth + 1;
			}

			if (!visited[next]) {

				visited[next] = true;

				q.push({ next, depth + 1 });

			}
		}
	}

	return -1;

}

int main() {

	cin >> n >> m >> k;

	alis.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);

	}

	cout << bfs(k);

	return 0;
}

// 1  2 4
// 2
// 3  1
// 4  2 5
// 5  3

