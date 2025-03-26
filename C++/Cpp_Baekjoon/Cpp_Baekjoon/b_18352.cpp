#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k, x;

	cin >> n >> m >> k >> x;

	vector<vector<pair<int, int>>> alis(n+1);

	vector<int> dist(n + 1, INF); // 1에서 각 위치까지 소모되는 비용

	for (int i = 0; i < m; i++) {

		int from, to;

		cin >> from >> to;

		alis[from].push_back({ to,1 }); // 도착지, 비용

	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	dist[x] = 0; // 출발지 등록

	pq.push({ 0,x }); // 비용, 위치

	while (!pq.empty()) {

		int current_cost = pq.top().first;
		int current_node = pq.top().second;

		pq.pop();

		if (dist[current_node] < current_cost) continue;

		for (auto& [next_node, next_cost] : alis[current_node]) {

			int new_cost = current_cost + next_cost;

			if (new_cost < dist[next_node]) {

				dist[next_node] = new_cost;

				pq.push({ new_cost, next_node });
			}
		}

	}

	bool found = false;

	for (int i = 1; i <= n; i++) {
		if (dist[i] == k) {
			cout << i << "\n";
			found = true;
		}
	}

	if (!found) {
		cout << -1;
	}

	return 0;
}
