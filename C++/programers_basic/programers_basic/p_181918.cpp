#include <iostream>
#include <vector>

using namespace std;

int main() {

	return 0;
}

vector<int> solution(vector<int> arr) {

	vector<int> stk;
	int i = 0;
	while (i < arr.size()) {

		if (stk.empty()) {
			stk.push_back(arr[i]);
			i++;
		}
		else
		{
			if (stk.back() < arr[i]) {
				stk.push_back(arr[i]);
				i++;
			}
			else
			{
				stk.pop_back();
			}
		}

	}

	return stk;
}