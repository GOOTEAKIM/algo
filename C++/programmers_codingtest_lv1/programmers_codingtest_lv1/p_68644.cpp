#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {

	vector<int> ans;

	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i+1; j < numbers.size(); j++) {
			int total = numbers[i] + numbers[j];

			if (find(ans.begin(), ans.end(), total) == ans.end()) {
				ans.push_back(total);
			}
		}
	}

	sort(ans.begin(), ans.end());

	return ans;
}


