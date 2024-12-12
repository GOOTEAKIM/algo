#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {

	vector<int> stk;

	int flag = 0;

	for (int i = 0; i < arr.size(); i++) {

		if (stk.empty()) {

			stk.push_back(arr[i]);
			flag++;
		}
		else
		{
			if (arr[i] == stk[stk.size() - 1]) {
				stk.pop_back();
				flag++;
			}
			else
			{
				stk.push_back(arr[i]);
				flag++;
			}
		}

	}

	if (stk.empty()) {
		return vector<int>(1, -1);
	}

	return stk;
}
