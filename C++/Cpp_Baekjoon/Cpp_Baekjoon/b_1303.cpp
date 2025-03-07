#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<char>> alis;

vector<vector<bool>> visited;

// ��������
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int n, m;

int num;

void dfs(int x, int y, char bw) {

	visited[x][y] = true; // �湮 ó��

	num++; // cnt ����

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue; // ��� ��� ����
		if (!visited[nx][ny] && alis[nx][ny] == bw) { // �湮���� �ʾҰ�, ���� ���ٸ�?
			dfs(nx, ny, bw);
		}
	}

}

int main() {

	cin >> n >> m;

	alis.assign(m, vector<char>(n));

	visited.assign(m, vector<bool>(n, false));

	int white = 0, blue = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alis[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				num = 0;

				dfs(i, j, alis[i][j]);

				if (alis[i][j] == 'B') {
					blue += num * num;
				}
				else if (alis[i][j] == 'W') {
					white += num * num;
				}
			}
		}
	}

	cout << white << " " << blue;

	return 0;
}