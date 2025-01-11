#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int number, int limit, int power) {

	int ans = 0;

	for (int i = 1; i <= number; i++) {
		int cnt = 0;
		for (int j = 1; j <= i / 2; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		cnt++;

		if (cnt <= limit) {
			ans += cnt;
		}
		else
		{
			ans += power;
		}
	}

	return ans;
}