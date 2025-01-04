#include <iostream>	
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {

	int ans = 0;

	sort(sides.begin(), sides.end());


	int sum = sides[0] + sides[1];
	
	// ���� �� ���� ���� ����Ʈ���� ���� �� ���� ���
	int diff = sides[1] - sides[0];
	
	ans += sides[1] - diff;

	// ���� �� ���� ������ ���� ���
	ans += sum - sides[1] - 1;

	return ans;
}