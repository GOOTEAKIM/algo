#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int MOD = 1000000000;

int main() {

	int n;
	
	cin >> n;

	int absN = abs(n);

	if (n == 0) {
		cout << 0 << "\n" << 0;
		return 0;
	}

	long long preprev = 0;
	long long prev = 1;
	long long ans = 0;

	for (int i = 2; i <= absN; i++) {
		ans = (prev + preprev) % MOD;
		preprev = prev;
		prev = ans;
	}

	if (absN == 1) {
		ans = 1;
	}
	
	int sign = 1;

	if (n < 0 && absN % 2 == 0) { // 음수여도 마지막은 절대값 출력
		sign = -1;
	}

	cout << sign << "\n" << ans;

	return 0;
}