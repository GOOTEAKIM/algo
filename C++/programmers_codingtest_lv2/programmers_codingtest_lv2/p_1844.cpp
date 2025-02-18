#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// 동 서 남 북
int dx[4]{ 1,-1,0,0 };
int dy[4]{ 0,0,1,-1 };

int solution(vector<vector<int>> maps) {

	int ans = 0;

	int sero = maps.size();
	int garo = maps[0].size();

	// 도달 불가할 수도 있으니까 -1로 초기화
	vector<vector<int>> dist(sero, vector<int>(garo, -1));

	queue<pair<int, int>> q;

	q.push({ 0,0 });

	dist[0][0] = 1;

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;
		
		q.pop();

		for (int i = 0; i < 4; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx == -1 || y == -1 || xx == sero || yy == garo || maps[xx][yy] == 0 || dist[xx][yy] != -1) {
				continue;
			}

			q.push({ xx,yy });

			dist[xx][yy] = dist[x][y] + 1;
		}

	}
	
	return dist[sero - 1][garo - 1];
}