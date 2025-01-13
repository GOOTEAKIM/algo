#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> nums) {

	vector<int> ans;
	
	for (int number : nums) {

		if (find(ans.begin(), ans.end(), number) == ans.end()) {
			ans.push_back(number);
		}
	}

	if (ans.size() <= nums.size() / 2) {
		return ans.size();
	}
	else
	{
		return nums.size() / 2;
	}

}