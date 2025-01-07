#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(int i, int j, int k) {

	int ans = 0;

	string key = to_string(k);

	for (int num = i; num<= j; num++) {

		string number = to_string(num);

		for (int p = 0; p < number.length(); p++) {
			if (number[p] == key[0]) {
				ans += 1;
			}
		}

	}

	return ans;
}