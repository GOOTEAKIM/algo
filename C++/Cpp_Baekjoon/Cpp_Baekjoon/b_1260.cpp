#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<bool> dfs_visited;

vector<bool> bfs_visited;

void dfs(int start) {

	dfs_visited[start] = true;

	cout << start << " ";

	for (int i = 0; i < alis[start].size(); i++) {
		
		int next = alis[start][i];

		if (!dfs_visited[next]) {
			dfs(next);
		}

	}

}

void bfs(int start) {

	queue<int> q;

	q.push(start);

	bfs_visited[start] = true;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		cout << now << " ";

		for (int i = 0; i < alis[now].size(); i++) {

			int next = alis[now][i];

			if (!bfs_visited[next]) {

				q.push(next);

				bfs_visited[next] = true;

			}

		}
	}

}

int main() {

	int v;

	cin >> n >> m >> v;

	alis.resize(n + 1);

	dfs_visited.assign(n + 1, false);
	
	bfs_visited.assign(n + 1, false);

	for (int i = 0; i < m; i++) {

		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	for (int i = 0; i < alis.size(); i++) {
		sort(alis[i].begin(), alis[i].end());
	}

	dfs(v);

	cout << "\n";

	bfs(v);

	return 0;
}