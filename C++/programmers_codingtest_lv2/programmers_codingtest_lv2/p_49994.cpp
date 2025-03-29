#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(string dirs) {
	
	int ans = 0;

	int x = 5, y = 5;
	
	set<pair<pair<int, int>, pair<int, int>>> visited; // 시작점, 도착점

	for (char dir : dirs) {

		int nx = x, ny = y;

		if (dir == 'U') ny++;
		else if (dir == 'D') ny--;
		else if (dir == 'R') nx++;
		else if (dir == 'L') nx--;

		if (nx < 0 || nx >10 || ny < 0 || ny>10) continue; // 범위에 있는지 확인

		if (visited.find({ {x, y}, {nx, ny} }) == visited.end()) {
			visited.insert({ {x, y}, {nx, ny} });
			visited.insert({ {nx, ny}, {x, y} });  // 반대 방향도 저장
			ans++;
		}

		// 좌표 업데이트
		x = nx;
		y = ny;
	 
	}

	return ans;
}