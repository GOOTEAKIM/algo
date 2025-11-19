#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int a, b;

int n, m;

vector<vector<int>> alis;

int bfs(int start, int finish) {

	vector<int> dist(n + 1, 0);

	queue<pair<int, int>> q;

	dist[start] = 0;

	q.push({ start, 0 });

	while (!q.empty()) {

		int now = q.front().first;
		int value = q.front().second;

		if (now == finish) return value;

		q.pop();

		for (auto next : alis[now]) {

			if (dist[next] == 0) {

				dist[next] = value + 1;
				q.push({ next, dist[next] });

			}

		}

	}

	return -1;
}

int main() {

	cin >> a >> b;

	cin >> n >> m;

	alis.resize(n+1);

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);
		alis[finish].push_back(start);

	}

	cout << bfs(a, b);

	return 0;
}