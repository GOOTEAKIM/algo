#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

/*

���ͽ�Ʈ��

bfs�� ����ѵ� ����ġ�� �ִ�

�ִ� �Ÿ� : �׷����� ����ġ ����

���� ���� : �׷����� ���� ����ġ ����, ����Ŭ �����ϴ� �ڵ� ����

�÷��̵� ���� : �׷����� ���� ����ġ ����, ����Ŭ ���� X

*/

/*

pq���� ����� ���� ������ ������ �ֿ켱���� �̴´�

���� ����ġ�� ����. ����Ǿ� ���� ���� �κ��� MAX�� ä�� �ִ´�

*/

// dist ���� �迭 : Ư�� �������� �ִ� �Ÿ� ���
// pq ������� �Ÿ��� ���� ª�� ������ �����Ѵ�.


struct Edge
{
	int num;
	int cost;

	bool operator<(Edge right) const {
		if (cost < right.cost) return false;
		if (cost > right.cost) return true;
		return false;
	}
};

vector<Edge> alis[10];

int n, m;

void dijkstra(int node) {

	// 1. pq �غ�
	
	priority_queue<Edge>pq;

	// 2. ���� �迭 �����
	int dist[100] = { 0, };

	// 2_1. ���� �迭�� MAX ������ �ʱ�ȭ
	for (int i = 0; i < 100; i++) {
		dist[i] = 234567890;
	}

	// 2_2. ���� ��� dist�� ���
	dist[node] = 0;

	// 3. ���� ��� ���
	pq.push({ node,0 }); // ��ġ�� ���

	while (!pq.empty()) {
		// 4. ť �� �� ��� Ȯ�� �� ����

		Edge now = pq.top(); // ���� now ��ġ�� �ִ�

		pq.pop();

		// 5. ����� ��忡�� �� �� �ִ� �ٸ� �ĺ� Ž��

		for (int i = 0; i < alis[now.num].size(); i++) {

			Edge next = alis[now.num][i]; // ���� now���� �� �� �ִ� �ĺ� ������

			int nextcost = next.cost + dist[now.num]; // now���� �ִ� �Ÿ� + now > next ������ �Ÿ� ���

			if (dist[next.num] <= nextcost) continue; // pq�� �̹� �������� ������ ��� ���������� �����ִ� ��� dist.next�� ���ؼ� ó��

			pq.push({ next.num,nextcost });

			dist[next.num] = nextcost; // �������� ������ ���� ����� ���

		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " : " << dist[i] << "\n";
	}

}

int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to, cost;

		cin >> from >> to >> cost;

		alis[from].push_back({ to,cost });
	}

	dijkstra(0);

	return 0;
}


/*
��� �� ���� ��
9	10
0	2	2
2	3	37
2	4	5
4	1	17
3	5	11
4	5	45
4	6	9
5	7	4
6	7	9
7	8	28

*/