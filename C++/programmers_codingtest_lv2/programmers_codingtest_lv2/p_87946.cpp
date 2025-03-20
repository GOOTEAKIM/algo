#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_dungeons = 0;

void dfs(int k, vector<vector<int>>& dungeons, vector<bool>& visited, int cnt) {

	max_dungeons = max(max_dungeons, cnt);

	for (int i = 0; i < dungeons.size(); i++) {

		if (!visited[i] && k >= dungeons[i][0]) { // �ּ� �Ƿε� ���� ����, �湮���� �ʾҴٸ�
			visited[i] = true; // �湮

			dfs(k - dungeons[i][1], dungeons, visited, cnt + 1);
			// k�� �Ҹ� �Ƿε� ����, cnt ����

			visited[i] = false; // �湮 ���� ���� ó��
		}

	}

}

int solution(int k, vector<vector<int>> dungeons) {
	
	vector<bool> visited(dungeons.size(), false);

	dfs(k, dungeons, visited,0);
	
	return max_dungeons;
}