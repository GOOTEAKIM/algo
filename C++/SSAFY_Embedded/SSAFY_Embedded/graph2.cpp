#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// vector로 배열 받기, 인접 리스트 방식

vector<int> alis[4];

int n, m;

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

		alis[from].push_back(to);
		
	}

	for (int i = 0; i < n; i++) {
		cout << i << " ";
		for (int j = 0; j < alis[i].size(); j++) {
			cout << alis[i][j] << " ";
		}
		cout << "\n";
	}

	int a, b;

	cin >> a >> b;

	int flag = 0;

	for (int i = 0; i < alis[a].size(); i++) {
		if (b == alis[a][i]) {
			flag = 1;
		}
	}
	if (flag) cout << "연결되어 있음\n";
	else
	{
		cout << "연결 안됨 ";
	}

	return 0;
}