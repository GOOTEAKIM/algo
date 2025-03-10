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

	parent[node] = 1; // 1은 루트니까 본인이 부모임

	while (!q.empty()) {

		int now = q.front();

		q.pop();

		for (int next : alis[now]) {	// 부모의 자식 탐색

			if (parent[next] == 0) { // 자식에게 부모가 없다?
				
				parent[next] = now;	// 부모를 now로 부여한다
				
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

양방향 간선 정보 저장

1	6	4
2	4
3	6	5
4	1	2	7
5	3
6	1	3
7	4

bfs 1부터 시작

*/

/*

// 실패

1	6 // 6은 방문하지 않았으므로 자식

6	3 // 6은 방문하고 3은 방문하지 않았으니까 3은 6의 자식

3	5 // 5는 3의 자식

4	1 // 둘 중 1이 나온다면 나머지 숫자는 방문 처리하고 1의 자식으로 처리

2	4 // 둘 중 하나가 방문했다면 방문 안한 숫자는 방문한 숫자의 자식

4	7 // 이하 동문

// 부모를 기록

6	1
3	6
5	3
4	1
2	4
7	4

*/
