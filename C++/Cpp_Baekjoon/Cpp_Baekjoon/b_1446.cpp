#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct edge
{
	int to, cost;
};

int n, d;

vector<vector<edge>> alis;
vector<int> dist;

void dijkstra() {

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	pq.push({ 0,0 }); // 비용, 위치

	while (!pq.empty()) {

		int cost = pq.top().first;
		int now = pq.top().second;

		pq.pop();

		if (dist[now] < cost) continue;

		for (auto& loc : alis[now]) {

			int next = loc.to;
			int ncost = cost + loc.cost;

			if (dist[next] > ncost) {

				dist[next] = ncost;

				pq.push({ ncost, next });
			}

		}

	}

}

int main() {

	cin >> n >> d;

	alis.resize(d + 1);
	dist.assign(d + 1, 1000000000); // 처음엔 싹 다 큰 값으로 초기화
	dist[0] = 0; // 출발점만 0

	for (int i = 0; i < d; i++) {
		alis[i].push_back({ i + 1,1 });
	}

	for (int i = 0; i < n; i++) {
		
		int start, finish, value;

		cin >> start >> finish >> value;

		if (finish <= d) {
			alis[start].push_back({ finish, value });
		}

	}

	dijkstra();

	cout << dist[d];

	return 0;
}