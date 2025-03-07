#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<int> depth;

void dfs(int node, int num) {

	depth[node] = num;

	for (int next : alis[node]) {
		if (depth[next] == -1) {
			dfs(next, num + 1);
		}
	}

}

int main() {

	iostream::sync_with_stdio(false);
	cin.tie(NULL);
	
	int r;

	cin >> n >> m >> r;

	alis.resize(n + 1);

	depth.assign(n + 1, -1);

	for (int i = 0; i < m; i++) {
		int u, v;

		cin >> u >> v;

		alis[u].push_back(v);
		alis[v].push_back(u);

	}

	for (int i = 1; i <= n; i++) {
		sort(alis[i].rbegin(), alis[i].rend());
	}

	dfs(r, 0);


	for (int i = 1; i <= n; i++) {
		cout << depth[i] << "\n";
	}

	return 0;
}