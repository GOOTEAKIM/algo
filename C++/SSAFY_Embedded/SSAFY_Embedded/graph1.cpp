#include <iostream>
#include <vector>

using namespace std;

int mat[4][4];

int n, m; // 노드, 간선 수


/*
노드 수 : 4
간선 수 : 4

밑은 연결 정보

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

	// 연결되어 있는가?

	int a, b;

	cin >> a >> b;

	cout << mat[a][b] << "\n";

	return 0;
}

/*

그래프 : 

정점과 정점 사이의 관계를 나타내는 자료 
정점과 간선으로 이루어진 자료구조

*/