#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// vector�� �迭 �ޱ�, ���� ����Ʈ ���

vector<int> alis[4];

int n, m;

/*
��� �� : 4
���� �� : 4

���� ���� ����

4  4
0  3
1  0
1  2
2  3
*/

int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		
	}

	for (int i = 0; i < n; i++) {
		cout << i << " ";
		for (int j = 0; j < alis[i].size(); j++) {
			cout << alis[i][j] << " ";
		}
		cout << "\n";
	}

	int a, b;

	cin >> a >> b;

	int flag = 0;

	for (int i = 0; i < alis[a].size(); i++) {
		if (b == alis[a][i]) {
			flag = 1;
		}
	}
	if (flag) cout << "����Ǿ� ����\n";
	else
	{
		cout << "���� �ȵ� ";
	}

	return 0;
}