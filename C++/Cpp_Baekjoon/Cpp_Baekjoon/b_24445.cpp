#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

int visited[100001];

void bfs(int node) {

	queue<int> q;

	q.push(node);

	int cost = 1;

	visited[node] = cost++;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int i = 0; i < alis[now].size(); i++) {
			int next = alis[now][i];

			if (visited[next] != 0) continue;

			q.push(next);

			visited[next] = cost++;
		}

	}

}

int main() {

	int r;

	cin >> n >> m >> r;

	alis.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	for (int i = 1; i <= n; i++) {
		sort(alis[i].rbegin(), alis[i].rend());
	}

	bfs(r);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << "\n";
	}

	return 0;
}