#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k;

vector<vector<int>> alis;

vector<bool> visited;

int cnt = 1;

int ans = 0;

void bfs(int start) {

	queue<int> q;

	visited[start] = true;

	q.push(start);

	while (!q.empty()) {

		int now = q.front();

		ans = now;

		q.pop();

		for (int next : alis[now]) {

			if (!visited[next]) {
				q.push(next);

				visited[next] = true;

				cnt++;
				break;
			}

		}

	}

}

int main() {

	cin >> n >> m >> k;

	alis.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);
		alis[finish].push_back(start);

	}

	if (alis[k].empty()) {
		cout << 1 << " " << k;
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		sort(alis[i].begin(), alis[i].end());
	}

	bfs(k);

	cout << cnt << " " << ans;

	return 0;
}


// 0
// 1  2 3
// 2  1 3
// 3  1 2 4 5 
// 4  3 6
// 5  3
// 6  4

// 	1 2 3 4 6

// 1  2 
// 2  1 3
// 3  2 4
// 4  3 5
// 5  4 6
// 6  5