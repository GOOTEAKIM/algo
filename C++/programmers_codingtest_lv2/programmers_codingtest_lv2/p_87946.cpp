#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_dungeons = 0;

void dfs(int k, vector<vector<int>>& dungeons, vector<bool>& visited, int cnt) {

	max_dungeons = max(max_dungeons, cnt);

	for (int i = 0; i < dungeons.size(); i++) {

		if (!visited[i] && k >= dungeons[i][0]) { // 최소 피로도 보다 높고, 방문하지 않았다면
			visited[i] = true; // 방문

			dfs(k - dungeons[i][1], dungeons, visited, cnt + 1);
			// k에 소모 피로도 빼줌, cnt 증가

			visited[i] = false; // 방문 하지 않음 처리
		}

	}

}

int solution(int k, vector<vector<int>> dungeons) {
	
	vector<bool> visited(dungeons.size(), false);

	dfs(k, dungeons, visited,0);
	
	return max_dungeons;
}