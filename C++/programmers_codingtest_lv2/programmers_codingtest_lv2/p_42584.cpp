#include<iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> prices) {

	vector<int> ans;

	for (int i = 0; i < prices.size(); i++) {

		int prim = prices[i];
		int cnt = 0;
		for (int j = i+1; j < prices.size(); j++) {

			if (prim <= prices[j]) {
				cnt++;
			}
			else
			{
				cnt++;
				break;
			}

		}
		ans.push_back(cnt);
	}

	return ans;
}