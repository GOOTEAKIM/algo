#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {

	int ans = 0;

	ans = count(array.begin(), array.end(), n);

	return ans;
}