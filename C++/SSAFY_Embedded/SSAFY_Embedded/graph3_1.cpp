#include <iostream>
#include <vector>
#include <algorithm>

// DFS -> 인접행렬

using namespace std;

/*

5 4
0 1
0 2
1 3
1 4

*/

//vector<int> mat[5];

int mat[5][5];

int n, m;

void dfs(int node) {

	cout << node << " ";

	// 2. 기저조건 (기본적인 DFS에서는 필요 없음, 완전 탐색하기 때문)

	for (int i = 0; i < n; i++) {

	// 4. 판별 , 0 이면 패스
		if (mat[node][i] == 0) continue;
	// 3. 기록 및 처리
	
	// i == 노드번호
	// 1. 가라
		dfs(i);

	// 5. 기록 삭제 및 복구
	}

}


int main() {

	cin >> n >> m;

	/*for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		mat[from].push_back(to);
	}*/

	for (int i = 0; i < m; i++) {
		int from, to;

		cin >> from >> to;

		mat[from][to] = 1;
	}

	dfs(0);

	return 0;
}