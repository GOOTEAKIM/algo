#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

// �� �� �� ��
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };


int dfs(int x, int y) {

	alis[x][y] = 0; // �湮 ó��

	int size = 1; // ���� ũ��

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		// �����¿� Ž������ �� �� �ִ� �� �߰�?
		if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && alis[nx][ny] == 1) {
			size += dfs(nx, ny); // dfs Ž��
		}

	}
	return size;
}

int main() {

	int k;

	cin >> n >> m >> k;

	// 2���� �迭�� �Ҵ�
	alis.assign(n + 1, vector<int>(m + 1, 0));

	int garbage = 0; // ���Ĺ� ũ��

	// �迭 ä���
	for (int i = 0; i < k; i++) {
		int from, to;

		cin >> from >> to;

		alis[from][to] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			// dfs�� ����Ž�� 
			if (alis[i][j] == 1) { // 1�� ���
				garbage = max(garbage, dfs(i, j));
			}
		}
	}

	cout << garbage;

	return 0;
}

/*
0	0	0	0	0
0	1	0	0	0
0	0	1	1	0
0	1	1	0	0
0	0	0	0	0	
*/