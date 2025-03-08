#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 인접 리스트 방식

/*
간선, 노드 수
9	8	
1	2	
1	3
1	5
1	6
3	4
5	8
5	9
8	7
연결 정보
*/

int n, m;

vector<int> alis[15]; // 연결 정보를 담는 벡터 (크기는 node수 + 1)

void bfs(int node) {

	// 1. 큐 준비
	queue<int> q;

	// 2. 시작점에 큐 등록
	q.push(node); // 시작점 등록

	while (!q.empty()) { // 큐가 빌 때까지 반복

		// 3. 맨 앞의 노드 확인 후 추출
		int now = q.front(); // 노드 확인

		q.pop(); // 추출

		cout << now << " ";

		// 4. 추출된 노드와 연결된 다른 노드 탐색
		for (int i = 0; i < alis[now].size(); i++) {
			// now > next 가 될 수 있는 다른 후보들 찾기
			int next = alis[now][i];

			// 5. next 에 해당하는 다른 노드를 큐에 등록
			q.push(next);
		}
	}

}


int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		alis[from].push_back(to); // 연결 정보를 alis 에 담는다
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

