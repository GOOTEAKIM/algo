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

BFS 기본 탐색 방법

1. 큐 준비
2. 큐에 시작점 등록
3. 맨 앞에 있는 노드 확인, 추출
4. 추출된 노드랑 연결된 다른 노드 탐색
5. next에 해당하는 다른 노드를 큐에 등록

3 ~ 5 번까지 큐가 비기 전까지 반복
-----------------------------------------------------

visited 처리 : 동일한 노드를 다시 확인하는 것을 방지

*/

vector<int> alis[15];

int visited[15]; // 노드 마지막 번호 + 1 

void bfs(int node) {
	
	queue<int> q;

	q.push(node);

	visited[node] = 1; // 시작점 기록

	// 추출된 노드와 연결된 다른 노드 탐색

	// 근데 가도 되는가?
	while (!q.empty()) {

		int now = q.front();

		q.pop();

		cout << now << " ";

		for (int i = 0; i < alis[now].size(); i++) {
			int next = alis[now][i];

			if (visited[next] != 0) continue; // 방문하면 패스

			q.push(next); // 가도 된다

			//visited[next] = 1; // 감 ㅇㅇ

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