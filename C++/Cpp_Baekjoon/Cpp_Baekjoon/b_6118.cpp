#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<bool> visited;

vector<int> depth;

void bfs(int node, int dist) {

	queue<int> q;

	q.push(node);

	visited[node] = true;

	depth[node] = dist;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int next : alis[now]) {

			if (!visited[next]) {

				q.push(next);

				visited[next] = true;

				depth[next] = depth[now] + 1;
			}

		}

	}

}

int main() {

	cin >> n >> m;

	alis.resize(n + 1);
	
	depth.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);
	}

	bfs(1,0);

	int cnt = 0;

	int ans = 0;

	for (int i = 0; i < depth.size(); i++) {

		if (depth[i] > cnt) {
			cnt = depth[i];

			ans = i;
		}

	}

	int distance = *max_element(depth.begin(), depth.end());

	int house = count(depth.begin(), depth.end(), distance);

	cout << ans << " " << distance << " " << house;

	return 0;
}

/*
1	3	2
2	3	4	5
3	6	4	2	1
4	3	2
5	2
6	3
*/