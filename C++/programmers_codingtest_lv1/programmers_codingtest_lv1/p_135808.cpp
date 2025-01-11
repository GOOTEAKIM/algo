#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
	
	int ans = 0;

	int len = score.size();

	sort(score.begin(), score.end(),greater<int>());

	for (int i = 0; i <= len-m; i += m) {

		int p = score[i + m - 1];
		ans += p * m;
	}

	return ans;
}