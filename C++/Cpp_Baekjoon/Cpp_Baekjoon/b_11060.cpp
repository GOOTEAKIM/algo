#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

vector<int>alis;

vector<bool>visited;

int ans = 0;

void bfs(int start, int finish) {

	queue<pair<int, int>>q;

	q.push({start,0});

	visited[start] = true;

	while (!q.empty()) {

		int now = q.front().first;
		int jumps = q.front().second;

		q.pop();

		if (now == n) {

			ans = jumps;
			return;
		}

		int step = alis[now];

		for (int i = 1; i<= step; i++) {

			int next = now + i;

			if (next <= n && !visited[next]) {
				visited[next] = true;
				q.push({ next, jumps + 1 });
			}

		}

	}

}

int main() {
	
	cin >> n;

	alis.resize(n+1);

	visited.assign(n+1, false);

	for (int i = 1; i <= n; i++) {
		cin >> alis[i];
	}

	bfs(1, n);

	if (visited[n]) cout << ans;
	else cout << -1;

	return 0;
}