#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {

	int ans = 0;

	while (n > 0) {

		int cnt = 10;

		ans += (n % cnt);
		n /= cnt;

	}
	return ans;
}