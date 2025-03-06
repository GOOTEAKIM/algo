#include <iostream>
#include <vector>

// DFS -> ��������Ʈ (�޸� ����)

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
	// ����
	for (int i = 0; i < alis[node].size(); i++) {

		int next = alis[node][i]; // alis[node] == ���� ���, �� �� �ִ� ��� (alis[node][i])
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