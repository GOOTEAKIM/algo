#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

long long arr[5001];

int solution(int n) {

	if (n % 2 != 0) {
		return 0;
	}

	arr[0] = 1;
	arr[2] = 3;

	for (int i = 4; i <= n; i += 2) {

		arr[i] = ((arr[i - 2] * 4) % MOD - (arr[i - 4] %MOD) + MOD) % MOD;
	}

	return arr[n];
}

