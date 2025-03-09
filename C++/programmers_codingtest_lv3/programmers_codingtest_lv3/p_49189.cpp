#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> alis;

vector<int> dist;

int solution(int n, vector<vector<int>> edge) {

	alis.resize(n + 1);

	dist.resize(n + 1, -1); // 각 노드의 깊이를 저장하기 위한 배열
	// 방문하지 않으면 -1

	for (int i = 0; i < edge.size(); i++) {

		int from = edge[i][0];
		int to = edge[i][1];

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	queue<int> q;

	q.push(1);

	dist[1] = 0; // 기준이니까 거리 0
	
	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int next : alis[now]) {

			if (dist[next] == -1) {
				q.push(next);

				dist[next] = dist[now] + 1;
			}

		}

	}

	int maxDist = *max_element(dist.begin(), dist.end());

	int ans = count(dist.begin(), dist.end(), maxDist);

	return ans;
}