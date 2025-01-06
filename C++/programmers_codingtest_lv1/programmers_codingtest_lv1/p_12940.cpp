#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {

	vector<int> ans;

	int yak = 1;
	int bae = 0;

	vector<int> minimum;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			minimum.push_back(i);
		}
	}

	for (int num : minimum) {
		if (m % num == 0) {
			yak = num;
		}
	}

	if (yak == 1) {
		bae = n * m;
	}
	else
	{
		bae = yak * (n / yak) * (m / yak);
	}

	ans.push_back(yak);
	ans.push_back(bae);

	return ans;

}