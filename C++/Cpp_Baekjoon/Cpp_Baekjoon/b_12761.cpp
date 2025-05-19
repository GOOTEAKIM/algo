#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int a, b, n, m;

vector<bool> visited(100001, false);

int ans = 0;

void bfs(int start, int finish) {
	queue<pair<int, int>> q; 
	visited[start] = true;
	q.push({ start, 0 });

	while (!q.empty()) {
		int now = q.front().first;
		int jumps = q.front().second;
		q.pop();

		if (now == finish) {
			ans = jumps;
			return;
		}

		// 이동 가능한 모든 경우, like 방향 배열
		int moves[8] = {
			now + 1,
			now - 1,

			now + a,
			now - a,
			now * a,

			now + b,
			now - b,
			now * b
		};

		for (int next : moves) {
			if (next >= 0 && next < 100001 && !visited[next]) {
				visited[next] = true;
				q.push({ next, jumps + 1 });
			}
		}
	}
}

int main() {
	cin >> a >> b >> n >> m;
	bfs(n, m);
	cout << ans;
	return 0;
}
