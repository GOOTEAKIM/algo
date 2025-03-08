#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<int> visited, depth;

int order = 1; // 방문 순서

void dfs(int start, int value) {

	visited[start] = order++;

	depth[start] = value;

	for (int next : alis[start]) {
		if (visited[next] == 0) {
			dfs(next, value+1);
		}
	}

}

int main() {

	int r;

	cin >> n >> m >> r;

	alis.resize(n + 1);

	visited.assign(n + 1, 0);

	depth.assign(n + 1, -1);

	for (int i = 0; i < m; i++) {

		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	for (int i = 1; i <= n; i++) {
		sort(alis[i].begin(), alis[i].end());
	}

	dfs(r, 0);

	long long ans = 0;

	for (int i = 1; i <= n; i++) {

		if (visited[i] == 0) continue;
		ans += (long long) depth[i] * visited[i];
	}

	cout << ans;

	return 0;
}