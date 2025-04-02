#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

vector<vector<pair<int,int>>> alis;

vector<bool> visited;

long long ans = 0;

void dfs(int start, long long sum) {

	if (sum > ans) { // 갱신
		ans = sum;
	}
	
	visited[start] = true; // 방문처리

	for (int i = 0; i < alis[start].size(); i++) {

		pair<int, int> next = alis[start][i];

		if (!visited[next.first]) {
			visited[next.first] = true;

			dfs(next.first, sum + next.second);

			visited[next.first] = false;
		}

	}

}

int main() {

	cin >> n;

	alis.resize(n + 1);

	visited.assign(n + 1, false);

	for (int i = 0; i < n - 1; i++) {

		int from, to, cost;

		cin >> from >> to >> cost;

		alis[from].push_back({ to,cost }); // 위치, 비용
		alis[to].push_back({ from,cost });

	}

	dfs(1, 0);

	cout << ans;

	return 0;
}