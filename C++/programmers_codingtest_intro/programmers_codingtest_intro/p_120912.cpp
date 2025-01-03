#include <iostream>
#include <string> 
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array) {

	int ans = 0;

	for (auto num : array) {

		string number = to_string(num);

		for (auto spell : number) {

			if (spell == '7') {
				ans++;
			}
		}

	}

	return ans;
}