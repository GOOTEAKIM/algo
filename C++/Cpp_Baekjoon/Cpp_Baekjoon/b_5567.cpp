#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

int m;

vector<vector<int>> alis;

vector<int> visited;

void bfs(int node) {

	queue<int> q;

	q.push(node);

	visited[node] = 0;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int next : alis[now]) {

			if (visited[next] == -1) {

				q.push(next);

				visited[next] = visited[now] + 1;
			}

		}

	}

}

int main() {

	cin >> n >> m;

	alis.resize(n + 1);

	visited.assign(n + 1, -1);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	bfs(1);

	int ans = 0;

	for (int next : visited) {
		if (next == 1 || next == 2) {
			ans++;
		}
	}

	cout << ans;

	return 0;
}

/*
1	2	3
2	1	3
3	1	4	2
4	3	5
5	4
*/