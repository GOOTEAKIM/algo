#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<bool> visited;

int ans = 0;

void bfs(int start, int finish) {

	queue<pair<int, int>> q; // 위치, 시간

	visited[start] = true;

	q.push({ start, ans });

	while (!q.empty()) {

		int now = q.front().first;
		int cho = q.front().second;

		// 도착한 경우? 종료
		if (now == finish) {
			ans = cho;
			return;
		}

		q.pop();

		for (int i = 0; i < alis[now].size(); i++) {

			int next = alis[now][i];

			if (!visited[next]) {

				// 방문 처리 -> q에 넣기 : 시간 더 빠름
				visited[next] = true;
				q.push({next, cho+1});
			}

		}

		int right = now + 1;

		if (right <= n) {
			if (!visited[right]) {

				visited[right] = true;
				q.push({ right, cho + 1 });
			}
		}

		int left = now - 1;

		if (left >= 1) {
			if (!visited[left]) {

				visited[left] = true;
				q.push({ left, cho + 1 });
			}
		}

	}


}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	int s, e;

	cin >> s >> e;

	alis.resize(n+1);

	visited.assign(n + 1, false);

	for (int i = 0; i < m; i++) {

		int x, y;

		cin >> x >> y;

		alis[x].push_back(y);
		alis[y].push_back(x);
	}

	bfs(s, e);

	cout << ans;

	return 0;
}