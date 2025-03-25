#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

/*

다익스트라

bfs랑 비슷한데 가중치가 있다

최단 거리 : 그래프에 가중치 포함

벨만 포드 : 그래프에 음수 가중치 포함, 싸이클 방지하는 코드 포함

플로이드 워셜 : 그래프에 음수 가중치 포함, 싸이클 방지 X

*/

/*

pq에서 비용이 가장 저렴한 간선을 최우선으로 뽑는다

음수 가중치가 없다. 연결되어 있지 않은 부분은 MAX로 채워 넣는다

*/

// dist 정답 배열 : 특정 노드까지의 최단 거리 기록
// pq 사용으로 거리가 제일 짧은 간선을 추출한다.


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

	// 1. pq 준비
	
	priority_queue<Edge>pq;

	// 2. 정답 배열 만들기
	int dist[100] = { 0, };

	// 2_1. 정답 배열을 MAX 값으로 초기화
	for (int i = 0; i < 100; i++) {
		dist[i] = 234567890;
	}

	// 2_2. 시작 노드 dist에 기록
	dist[node] = 0;

	// 3. 시작 노드 등록
	pq.push({ node,0 }); // 위치랑 비용

	while (!pq.empty()) {
		// 4. 큐 맨 앞 노드 확인 및 추출

		Edge now = pq.top(); // 현재 now 위치에 있다

		pq.pop();

		// 5. 추출된 노드에서 갈 수 있는 다른 후보 탐색

		for (int i = 0; i < alis[now.num].size(); i++) {

			Edge next = alis[now.num][i]; // 현재 now에서 갈 수 있는 후보 간선들

			int nextcost = next.cost + dist[now.num]; // now까지 최단 거리 + now > next 사이의 거리 비용

			if (dist[next.num] <= nextcost) continue; // pq에 이미 다음으로 진행할 노드 간선정보가 남아있는 경우 dist.next랑 비교해서 처리

			pq.push({ next.num,nextcost });

			dist[next.num] = nextcost; // 다음으로 진행할 때의 비용을 기록

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
노드 수 간선 수
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