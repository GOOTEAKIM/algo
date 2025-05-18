#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

int a, b;

int ans = 0;

vector<int> alis;

vector<bool> visited;

void bfs(int start, int finish) {

	queue<pair<int, int>>q; // (현위치, 점프 횟수)

	q.push({ start,0 });

	visited[start] = true;

	while (!q.empty()) {

		int now = q.front().first;
		int jumps = q.front().second;

		q.pop();

		if (now == finish) {

			ans = jumps;
			return;
		}

		int step = alis[now];

		// 전진
		for (int k = 1; now + k * step <= n; k++) {
			int next = now + k * step;

			if (!visited[next]) {

				visited[next] = true;
				q.push({ next, jumps + 1 });

			}
		}

		// 후진
		for (int k = 1; now - k * step >= 1; k++) {
			int next = now - k * step;
			
			if (!visited[next]) {
				visited[next] = true;
				q.push({ next, jumps + 1 });
			}
		}


	}

}

int main() {

	cin >> n;

	alis.assign(n + 1, 0);
	visited.assign(n + 1, false);

	for (int i = 1; i <= n; i++) {
		cin >> alis[i];
	}

	cin >> a >> b;

	bfs(a, b);

	if (visited[b]) cout << ans;
	else cout << -1;

	return 0;
}