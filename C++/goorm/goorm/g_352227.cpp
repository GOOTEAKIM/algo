#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;

int ans = 0;

vector<int> arr;

vector<vector<int>> alis;

vector<bool> visited;

void bfs(int start) {

	queue<int> q;

	q.push(start);

	visited[start] = true;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		ans += arr[now];

		for (auto next : alis[now]) {

			if (!visited[next]) {

				visited[next] = true;
				q.push(next);

			}

		}

	}

}

int main() {

	cin >> n >> m;

	arr.assign(n + 1, 0);

	alis.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);
		alis[finish].push_back(start);

	}

	bfs(1);

	cout << ans;

	return 0;
}

