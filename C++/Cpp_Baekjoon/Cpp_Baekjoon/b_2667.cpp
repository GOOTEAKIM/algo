#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n, m;

vector<vector<int>> alis;

int visited[100001];

vector<int> result;

int max_hack = 0;

int dfs(int node) {

	visited[node] = 1;

	int count = 1;

	for (int next : alis[node]) {
		if (!visited[next]) {
			count += dfs(next);
		}
	}

	return count;
}

int main() {

	cin >> n >> m;

	alis.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;

		alis[b].push_back(a);

	}

	for (int i = 1; i <= n; i++) {

		memset(visited, 0, sizeof(visited));

		int count = dfs(i);

		if (count > max_hack) {
			max_hack = count;

			result.clear();
			result.push_back(i);
		}

		else if (count == max_hack) {
			result.push_back(i);
		}

	}

	for (int i = 0; i < result.size(); i++) {

		cout << result[i];
		if (i != result.size() - 1) {
			cout << " ";
		}
	}

	return 0;
}
/*

1	3
2	3
3	4	5

1	4
2	5

*/