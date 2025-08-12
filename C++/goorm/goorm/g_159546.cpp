#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k;

vector<vector<int>> alis;

vector<int> visited;

void bfs(int x) {

	queue<int> q;

	q.push(x);

	visited[x] = 0;

	while (!q.empty()) {

		int now = q.front();
		int depth = visited[now];

		q.pop();

		for (int next : alis[now]) {

			if (visited[next] == -1) {

				q.push(next);

				visited[next] = depth + 1;

			}
		}
	}
}

int main() {

	cin >> n >> m >> k;

	alis.resize(n + 1);

	visited.assign(n + 1, -1);

	for (int i = 0; i < m; i++) {

		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);
		alis[finish].push_back(start);

	}

	bfs(n);

	if (visited[1] == -1) {
		cout << "NO";
	}
	else {

		if (visited[1] <= k) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

	}

	// for(int nex : visited) {
	// 	cout << nex << " ";
	// }

	return 0;
}

// 1  2 3 4
// 2  1 4 6
// 3  1 4
// 4  1 2 3
// 5  
// 6  2


