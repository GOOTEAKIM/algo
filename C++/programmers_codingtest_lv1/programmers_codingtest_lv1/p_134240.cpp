#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {

	// 중앙에 물 배치
	// 물 먼저 먹으면 승
	// 같이 먹는 음식 종류 양이 같아야 함, 순서도
	// 칼로리 낮은 걸 먼저 먹을 수 있음

	string ans = "";

	string rev = "";

	for (int i = 1; i < food.size(); i++) {
		int count = food[i] / 2;
		ans += string(count, '0' + i);
		rev = string(count, '0' + i) + rev;
	}

	ans += "0";

	ans += rev;

	return ans;
}