#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

vector<int> alis;

vector<bool> visited;

void bfs(int start) {

	queue<int> q;

	q.push(start);

	visited[start] = true;

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		int jumps = alis[now];

		int left = now - jumps;
		if (left >= 1 && !visited[left]) {
			
			q.push(left);
			visited[left] = true;
		}

		int right = now + jumps;
		if (right <= n && !visited[right]) {

			q.push(right);
			visited[right] = true;
		}

	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	alis.resize(n + 1);
	visited.assign(n + 1, false);

	for (int i = 1; i <= n; i++) {

		cin >> alis[i];

	}

	int s;

	cin >> s;

	bfs(s);

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		if (visited[i]) ans++;
	}

	cout << ans;

	return 0;
}