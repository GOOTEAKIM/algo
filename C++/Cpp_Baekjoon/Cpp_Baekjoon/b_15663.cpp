#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int alis[10];
int ans[10];
bool visited[10];


void dfs(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}

	else
	{
		int prev = -1; // �ߺ��� ������ ���� ���� ���

		for (int i = 0; i < n; i++) {

			if (!visited[i] && prev != alis[i]) {
				visited[i] = true; // �湮 ó��

				prev = alis[i]; // ���� ���ڸ� ����� ����

				ans[cnt] = alis[i]; // ��ĭ�� �ۼ�

				dfs(cnt + 1); // Ž��

				visited[i] = false; // �湮 ����
			}
		}
	}

}

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis, alis + n);

	dfs(0);

	return 0;
}