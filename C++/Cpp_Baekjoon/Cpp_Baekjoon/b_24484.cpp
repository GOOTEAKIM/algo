#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<int> visited, depth;

int order = 1;

void dfs(int node, int value) {

	visited[node] = order++;

	depth[node] = value;

	for (int next : alis[node]) {
		if (visited[next] == 0) {
			dfs(next, value+1);
		}
	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

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
		sort(alis[i].rbegin(), alis[i].rend());
	}

	dfs(r, 0);
	
	long long ans = 0;

	for (int i = 1; i <= n; i++) {
		if (visited[i] == 0) continue;

		ans += (long long) visited[i] * depth[i];
	}

	cout << ans;

	return 0;
}