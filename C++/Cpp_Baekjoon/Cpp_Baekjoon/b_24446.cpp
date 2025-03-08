#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<int> visited;

void bfs(int node) {

	queue<int> q;

	q.push(node);

	visited[node] = 0;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int i = 0; i < alis[now].size(); i++) {
			int next = alis[now][i];

			if (visited[next] != -1) continue;

			q.push(next);
			visited[next] = visited[now] + 1;
		}

	}


}

int main() {

	int r;

	cin >> n >> m >> r;

	alis.resize(n + 1);

	visited.assign(n + 1, -1);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);
	}

	bfs(r);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}