#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(string dirs) {
	
	int ans = 0;

	int x = 5, y = 5;
	
	set<pair<pair<int, int>, pair<int, int>>> visited; // ������, ������

	for (char dir : dirs) {

		int nx = x, ny = y;

		if (dir == 'U') ny++;
		else if (dir == 'D') ny--;
		else if (dir == 'R') nx++;
		else if (dir == 'L') nx--;

		if (nx < 0 || nx >10 || ny < 0 || ny>10) continue; // ������ �ִ��� Ȯ��

		if (visited.find({ {x, y}, {nx, ny} }) == visited.end()) {
			visited.insert({ {x, y}, {nx, ny} });
			visited.insert({ {nx, ny}, {x, y} });  // �ݴ� ���⵵ ����
			ans++;
		}

		// ��ǥ ������Ʈ
		x = nx;
		y = ny;
	 
	}

	return ans;
}