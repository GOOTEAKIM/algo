#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<vector<bool>> visited;

int dx [] = {1,-1,0,0,1,1,-1,-1};
int dy[] = { 0,0,1,-1,1,-1,1,-1 };

bool isPeak;

int cnt = 0;

void dfs(int x, int y) {

	for (int i = 0; i < 8; i++) {
		// 8���� Ž��
		int nx = x + dx[i];
		int ny = y + dy[i];

		// ���� ����� �н�
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

		// ������ �ȹ��� ���µ� ���̰� �� ���? 
		if (alis[x][y] < alis[nx][ny]) {
			isPeak = false; // ���츮�� �ƴ�
		}

		// �湮�� ���� �н�
		if (visited[nx][ny]) continue;

		if (alis[x][y] == alis[nx][ny]) { // ���̰� ����? == ���츮
			visited[nx][ny] = true; // �湮 ó��
			dfs(nx, ny); // �� Ž��
		}
	}
}

int main() {

	cin >> n >> m;

	alis.resize(n, vector<int>(m));

	visited.assign(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> alis[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j]) continue; // �湮�� ���� �н�

			isPeak = true; // ���츮��
			visited[i][j] = true; // �湮
			dfs(i, j); // Ž��

			if (isPeak) cnt++; // Ž���ص� ���츮�� ī��Ʈ ����
		}
	}


	cout << cnt;

	return 0;
}