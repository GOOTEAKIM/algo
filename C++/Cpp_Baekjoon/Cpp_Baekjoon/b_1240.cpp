#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<int>> cost;

int bfs(int start, int finish) {

	int cnt = 0;

	queue<int> q;

	q.push(start);

	vector<int> dist(n + 1, -1);

	dist[start] = 0;

	while (!q.empty()) {

		int now = q.front();

		if (now == finish) {
			return dist[finish];
		}

		q.pop();

		for (auto next : alis[now]) {

			if (dist[next] == -1) {
				
				q.push(next);

				dist[next] = dist[now] + cost[now][next];

			}
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	alis.resize(n + 1);

	cost.assign(n + 1, vector<int>(n + 1, 0));

	for (int i = 0; i < n-1; i++) {

		int start, finish, value;

		cin >> start >> finish >> value;

		alis[start].push_back(finish);
		alis[finish].push_back(start);

		cost[start][finish] = value;
		cost[finish][start] = value;
	}

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		int ans = bfs(start, finish);

		cout << ans << "\n";
	}

	return 0;
}