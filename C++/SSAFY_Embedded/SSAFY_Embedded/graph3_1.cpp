#include <iostream>
#include <vector>
#include <algorithm>

// DFS -> �������

using namespace std;

/*

5 4
0 1
0 2
1 3
1 4

*/

//vector<int> mat[5];

int mat[5][5];

int n, m;

void dfs(int node) {

	cout << node << " ";

	// 2. �������� (�⺻���� DFS������ �ʿ� ����, ���� Ž���ϱ� ����)

	for (int i = 0; i < n; i++) {

	// 4. �Ǻ� , 0 �̸� �н�
		if (mat[node][i] == 0) continue;
	// 3. ��� �� ó��
	
	// i == ����ȣ
	// 1. ����
		dfs(i);

	// 5. ��� ���� �� ����
	}

}


int main() {

	cin >> n >> m;

	/*for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		mat[from].push_back(to);
	}*/

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		mat[from][to] = 1;
	}

	dfs(0);

	return 0;
}