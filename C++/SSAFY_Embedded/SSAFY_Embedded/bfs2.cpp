#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

/*

6	7
1	2
1	4
2	3
2	5
4	5
4	6
3	5

*/

/*

BFS �⺻ Ž�� ���

1. ť �غ�
2. ť�� ������ ���
3. �� �տ� �ִ� ��� Ȯ��, ����
4. ����� ���� ����� �ٸ� ��� Ž��
5. next�� �ش��ϴ� �ٸ� ��带 ť�� ���

3 ~ 5 ������ ť�� ��� ������ �ݺ�
-----------------------------------------------------

visited ó�� : ������ ��带 �ٽ� Ȯ���ϴ� ���� ����

*/

vector<int> alis[15];

int visited[15]; // ��� ������ ��ȣ + 1 

void bfs(int node) {
	
	queue<int> q;

	q.push(node);

	visited[node] = 1; // ������ ���

	// ����� ���� ����� �ٸ� ��� Ž��

	// �ٵ� ���� �Ǵ°�?
	while (!q.empty()) {

		int now = q.front();

		q.pop();

		cout << now << " ";

		for (int i = 0; i < alis[now].size(); i++) {
			int next = alis[now][i];

			if (visited[next] != 0) continue; // �湮�ϸ� �н�

			q.push(next); // ���� �ȴ�

			//visited[next] = 1; // �� ����

			visited[next] = visited[now] + 1;
		}

	}
	cout << endl;
	for (int i = 1; i <= 6; i++) {
		cout << i << " = " << visited[i] << "\n";
	}
}

int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);
	}

	bfs(1);

	return 0;
}