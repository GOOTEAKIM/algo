#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;

int ans = 0;

vector<int> arr;

vector<vector<int>> alis;

vector<bool> visited;

void bfs(int s) {

	queue<int> q;

	q.push(s);

	visited[s] = true;

	vector<int> depth(n + 1, 0);

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		ans += arr[now] * depth[now];

		for (auto next : alis[now]) {

			if (!visited[next]) {

				visited[next] = true;
				q.push(next);

				depth[next] = depth[now] + 1;
			}

		}

	}

}

int main() {

	cin >> n >> m;

	arr.assign(n + 1, 0);
	alis.resize(n + 1);
	visited.assign(n + 1, false);

	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = 0; i < m; i++) {

		int s, e;

		cin >> s >> e;

		alis[s].push_back(e);
		alis[e].push_back(s);

	}

	bfs(1);

	cout << ans;

	return 0;
}
