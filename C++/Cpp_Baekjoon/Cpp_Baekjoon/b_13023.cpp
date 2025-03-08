#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<bool> visited;

bool found = false;

void dfs(int start, int depth) {

	if (depth == 5) {
		found = true;
		return;
	}

	visited[start] = true;

	for (int next : alis[start]) {
		if (!visited[next]) {
			
			dfs(next, depth + 1);

			if (found) return;
		}
	}

	visited[start] = false;
}

int main() {

	cin >> n >> m;

	alis.resize(n);

	visited.assign(n, false);

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);
		
	}

	for (int i = 0; i < n; i++) {

		if (found) break;

		dfs(i, 1);

	}

	cout << (found ? 1 : 0);

	return 0;
}

/*
0	1
1	0	2
2	1	3
3	2	4
*/