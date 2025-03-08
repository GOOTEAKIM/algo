#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<int> depth, order;

void bfs(int node) {

	queue<int> q;

	q.push(node);

	depth[node] = 0;

	order[node] = 1;

	int visit_count = 2; // 방문 순서 이므로 순차적으로 증가 해야함.

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int i = 0; i < alis[now].size(); i++) {
			int next = alis[now][i];

			if (depth[next] != -1) continue;

			q.push(next);

			depth[next] = depth[now] + 1;

			order[next] = visit_count++;
		}

	}

}

int main() {

	int r;

	cin >> n >> m >> r;

	alis.resize(n + 1);

	depth.assign(n + 1, -1);

	order.assign(n + 1, 0);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	for (int i = 1; i <= n; i++) {
		sort(alis[i].begin(), alis[i].end());
	}

	bfs(r);

	long long ans = 0;

	for (int i = 1; i <= n; i++) {
		if (depth[i] == -1) continue;

		ans += (long long)depth[i] * order[i];

	}

	cout << ans;

	return 0;
}
