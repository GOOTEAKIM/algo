#include <iostream>
#include <vector>

// DFS -> 인접리스트 (메모리 절약)

using namespace std;

/*

5 4
0 1
0 2
1 3
1 4

*/

int n, m;

vector<int> alis[5];

void dfs(int node) {

	cout << node << " ";
	// 가라
	for (int i = 0; i < alis[node].size(); i++) {

		int next = alis[node][i]; // alis[node] == 현재 노드, 갈 수 있는 노드 (alis[node][i])
		dfs(next);
	}

}


int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
	}

	dfs(0);

	return 0;
}