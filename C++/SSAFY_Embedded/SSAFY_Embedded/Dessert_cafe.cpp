#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n;
int m[30][30];

// ���� ���� �»� ���
int dr[] = { 1, 1, -1,-1 };
int dc[] = { 1,-1,-1,1 };

int visited[110]; // index = ����Ʈ ����, value = ��λ� �ִ°�

int destRow, destCol; 

vector<int> path;

int ans;

void input() {

	// �ʱ�ȭ
	memset(visited, 0, sizeof(visited));

	path.clear();

	ans = 0;

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			m[i][j] = -1;
		}
	}

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> m[i][j];
		}
	}

}

void dfs(int row, int col, int dir) {
	
	// ��������

	if (row == destRow && col == destCol) {

		if (ans < path.size()) {
			ans = path.size();
		}
		return;
	}

	for (int ndir = dir; ndir <= dir + 1; ndir++) {
		
		if (ndir >= 4) continue;
		
		int nr = row + dr[ndir];
		int nc = col + dc[ndir];
	
		// �Ǻ�
		if (m[nr][nc] == 1) continue; // ���� ���

		if (visited[m[nr][nc]] == 1) continue; // �̹� �湮�� ��

		// ��� �� ó��
		visited[m [nr][nc]] = 1;
		path.push_back(m[nr][nc]);

		// ����
		dfs(nr,nc,ndir);

		// ����
		visited[m[nr][nc]] = 0;
		path.pop_back();
	}

	if (ans < 4) {
		ans = -1; // �簢���� �ȵ� ���
	}
}

void solution() {
	// ��� �پ��� ��θ� ��� �غ���

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n; col++) {
			// ������
			destRow = row + 1;
			destCol = col - 1;

			// ��� �� ó��
			visited[m[row][col]] = 1;
			path.push_back(m[row][col]);

			dfs(row, col, 0);

			// ����
			visited[m[row][col]] = 0;
			path.pop_back();
		}
	}

}

int main() {

	int t;
	
	cin >> t;

	for (int tc = 1; tc <= t; tc++) {

		input();
		solution();

		cout << "#" << tc << " " << ans << "\n";

	}
	return 0;
}