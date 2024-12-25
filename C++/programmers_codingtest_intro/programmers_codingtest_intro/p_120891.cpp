#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solution(int order) {

	int ans = 0;

	string wow = to_string(order);

	for (auto yeah : wow) {

		if (yeah == '3' || yeah == '6' || yeah == '9') {

			ans++;
		}
	}

	return ans;
}