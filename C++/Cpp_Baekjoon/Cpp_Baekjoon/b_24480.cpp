#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, r;

vector<vector<int>> alis;

int visited[100001];

int order = 1;

void dfs(int node) {

	visited[node] = order++;

	for (int i = 0; i < alis[i].size(); i++) {
		int next = alis[node][i];

		if (visited[next] == 0) {
			dfs(next);
		}

	}

}

int main() {

	cin >> n >> m >> r;

	alis.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	for (int i = 1; i <= m; i++) {
		sort(alis.rbegin(), alis.rend());
	}

	dfs(r);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}