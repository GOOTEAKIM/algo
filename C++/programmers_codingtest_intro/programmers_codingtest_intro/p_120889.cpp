#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {

	sort(sides.begin(), sides.end());

	if (sides[2] >= sides[0] + sides[1]) {
		return 2;
	}
	else
	{
		return 1;
	}
}
