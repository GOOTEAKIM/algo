#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

vector<vector<int>> alis;

vector<bool> visited;

int ans = 0;

void dfs(int node,int cnt) {

	visited[node] = true; // 루트 방문 처리

	if (alis[node].size() == 1 && node != 1) { // 자식이 없고 1이 아니면?

		ans += cnt;
		return;
	
	}

	for (int next : alis[node]) {
		if (!visited[next]) {

			visited[next] = true;

			dfs(next, cnt + 1);

			visited[next] = false;
		}
	}
	
}

int main() {

	cin >> n;

	alis.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 0; i < n - 1; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	dfs(1, 0);

	cout << (ans % 2 ? "Yes" : "No");

	return 0;
}	
