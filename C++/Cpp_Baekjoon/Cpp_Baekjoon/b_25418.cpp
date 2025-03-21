#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int bfs(int a, int k) {

	queue<pair<int, int>> q;

	vector<bool> visited(k + 1, false);

	q.push({ a,0 });

	visited[a] = true;

	while (!q.empty()) {

		int cur = q.front().first;

		int cnt = q.front().second;

		q.pop();

		if (cur == k) return cnt;

		int nextnum[2] = { cur + 1, cur * 2 };

		if (cur * 2 <= k && !visited[cur * 2]) {
			q.push({ cur * 2, cnt + 1 });
			visited[cur * 2] = true;
		}

		if (cur + 1 <= k && !visited[cur + 1]) {
			q.push({ cur + 1, cnt + 1 });
			visited[cur + 1] = true;
		}

	}

	return -1;
}

int main() {

	int a, k;

	cin >> a >> k;

	int ans = bfs(a, k);

	cout << ans;

	return 0;
}