#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n;

vector<vector<int>> alis;

vector<int> parent;

void bfs(int node) {

	queue<int> q;

	q.push(node);

	parent[node] = 1; // 1�� ��Ʈ�ϱ� ������ �θ���

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int next : alis[now]) {	// �θ��� �ڽ� Ž��

			if (parent[next] == 0) { // �ڽĿ��� �θ� ����?
				
				parent[next] = now;	// �θ� now�� �ο��Ѵ�
				
				q.push(next);

			}

		}

	}

}

int main() {

	cin >> n;

	alis.resize(n+1);

	parent.resize(n + 1, 0);

	for (int i = 0; i < n - 1; i++) {

		int from, to;

		cin >> from >> to;

		alis[from].push_back(to);
		alis[to].push_back(from);

	}

	bfs(1);
	
	for (int i = 2; i <= n; i++) {
		cout << parent[i] << "\n";
	}

	return 0;
}


/*

����� ���� ���� ����

1	6	4
2	4
3	6	5
4	1	2	7
5	3
6	1	3
7	4

bfs 1���� ����

*/

/*

// ����

1	6 // 6�� �湮���� �ʾ����Ƿ� �ڽ�

6	3 // 6�� �湮�ϰ� 3�� �湮���� �ʾ����ϱ� 3�� 6�� �ڽ�

3	5 // 5�� 3�� �ڽ�

4	1 // �� �� 1�� ���´ٸ� ������ ���ڴ� �湮 ó���ϰ� 1�� �ڽ����� ó��

2	4 // �� �� �ϳ��� �湮�ߴٸ� �湮 ���� ���ڴ� �湮�� ������ �ڽ�

4	7 // ���� ����

// �θ� ���

6	1
3	6
5	3
4	1
2	4
7	4

*/
