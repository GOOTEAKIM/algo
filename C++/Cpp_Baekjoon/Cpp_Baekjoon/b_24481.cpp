#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<int> depth;


void dfs(int node, int d) { // d == °¡ÁßÄ¡

	depth[node] = d;

	for (int next : alis[node]) {
		if (depth[next] == -1) {
			dfs(next, d + 1);
		}
	}

}


int main() {

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
		sort(alis[i].begin(), alis[i].end());
	}

	dfs(r,0);

	for (int i = 1; i <= n; i++) {
		cout << depth[i] << "\n";
	}

	return 0;
}

/*
1	2	4
2	1	3	4
3	2	4
4	1	2	3
*/

