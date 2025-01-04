#include <iostream>	
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {

	int ans = 0;

	sort(sides.begin(), sides.end());


	int sum = sides[0] + sides[1];
	
	// 가장 긴 것이 현재 리스트에서 가장 긴 변인 경우
	int diff = sides[1] - sides[0];
	
	ans += sides[1] - diff;

	// 가장 긴 것이 나머지 변인 경우
	ans += sum - sides[1] - 1;

	return ans;
}