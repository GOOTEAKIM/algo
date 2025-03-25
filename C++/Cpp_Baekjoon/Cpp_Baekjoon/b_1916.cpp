#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int main() {

	int n;

	cin >> n;
	
	int m;

	cin >> m;

	vector<vector<pair<int, int>>> alis(n + 1);

	vector<int> dist(n + 1, INF);

	for (int i = 0; i < m; i++) {

		int from, to, cost;

		cin >> from >> to >> cost;

		alis[from].push_back({ to,cost });

	}

	int start, finish;

	cin >> start >> finish;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	dist[start] = 0;

	pq.push({ 0,start }); // ���, ��ġ

	while (!pq.empty()) { // �ణ bfs ����

		int current_cost = pq.top().first;
		int current_node = pq.top().second;

		pq.pop();

		if (dist[current_node] < current_cost) continue; // ó���� ���� ��ŵ

		for (auto& [next_node, cost] : alis[current_node]) {

			int new_cost = current_cost + cost;

			if (new_cost < dist[next_node]) { // �ٸ� �� ��ģ ����� �� �δ�? 
				dist[next_node] = new_cost; // ��� ����

				pq.push({ new_cost, next_node }); // push
			}
		}

	}

	cout << dist[finish];

	return 0;
}