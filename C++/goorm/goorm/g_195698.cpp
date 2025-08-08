#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<bool> visited;

int ans = 0;

void bfs(int x) {

	queue<int> q;

	q.push(x);

	visited[x] = true;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int i = 0; i < alis[now].size(); i++) {
			int next = alis[now][i];

			if (!visited[next]) {
				for (int j = 0; j < alis[next].size(); j++) {
					if (alis[next][j] == now) {
						q.push(next);

						visited[next] = true;
					}
				}
			}
		}

	}
	ans++;

}

int main() {

	cin >> n >> m;

	alis.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);

	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			bfs(i);
		}
	}

	cout << ans;

	return 0;
}
