#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int arr[9];

void dfs(int now, int start) {
	
	// ���� ����
	if (now == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	else
	{	
		// ���� ���
		for (int i = start; i <= n; i++) {

			arr[now] = i;

			dfs(now + 1, i); // �̷��� �ϸ� �����ϴ� ������ ��� Ž��
		}
	}

}

int main() {

	cin >> n >> m;

	dfs(0,1);

	return 0;
}