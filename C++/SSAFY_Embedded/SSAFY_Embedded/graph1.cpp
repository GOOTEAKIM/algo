#include <iostream>
#include <vector>

using namespace std;

int mat[4][4];

int n, m; // ���, ���� ��


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

		mat[from][to] = 1;

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << "\n";
	}

	// ����Ǿ� �ִ°�?

	int a, b;

	cin >> a >> b;

	cout << mat[a][b] << "\n";

	return 0;
}

/*

�׷��� : 

������ ���� ������ ���踦 ��Ÿ���� �ڷ� 
������ �������� �̷���� �ڷᱸ��

*/