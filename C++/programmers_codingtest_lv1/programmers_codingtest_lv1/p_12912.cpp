#include <iostream>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {

	long long ans = 0;

	if (a > b) {
		for (int i = b; i <= a; i++) {
			ans += i;
		}
	}

	for (int i = a; i <= b; i++) {
		ans += i;
	}
	return ans;
}