#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// ���� ����Ʈ ���

/*
����, ��� ��
9	8	
1	2	
1	3
1	5
1	6
3	4
5	8
5	9
8	7
���� ����
*/

int n, m;

vector<int> alis[15]; // ���� ������ ��� ���� (ũ��� node�� + 1)

void bfs(int node) {

	// 1. ť �غ�
	queue<int> q;

	// 2. �������� ť ���
	q.push(node); // ������ ���

	while (!q.empty()) { // ť�� �� ������ �ݺ�

		// 3. �� ���� ��� Ȯ�� �� ����
		int now = q.front(); // ��� Ȯ��

		q.pop(); // ����

		cout << now << " ";

		// 4. ����� ���� ����� �ٸ� ��� Ž��
		for (int i = 0; i < alis[now].size(); i++) {
			// now > next �� �� �� �ִ� �ٸ� �ĺ��� ã��
			int next = alis[now][i];

			// 5. next �� �ش��ϴ� �ٸ� ��带 ť�� ���
			q.push(next);
		}
	}

}


int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to); // ���� ������ alis �� ��´�
	}

	bfs(1);

	return 0;
}

/*
1
2	3	5	6
4	8	9
7
*/

/*
1	2	3	5	6
3	4
5	8	9
8	7
*/

