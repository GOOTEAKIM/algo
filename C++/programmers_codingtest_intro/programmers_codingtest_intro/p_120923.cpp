#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {

	vector<int> ans;

	int middle = 0;
	
	int n = 0;

	if (num % 2 == 0) {
		n = (total - (num) * (num - 1) / 2) / num;

		for (int i = n; i < n + num; i++) {
			ans.push_back(i);
		}
	}
	else
	{
		middle = total / num;

		int start = middle - (num / 2);

		for (int i = start; i <= middle + (num / 2); i++) {
			ans.push_back(i);
		}

	}

	return ans;
}