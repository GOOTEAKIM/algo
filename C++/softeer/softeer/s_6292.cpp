#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int main() {

	long long k, p, n;

	cin >> k >> p >> n;

	n *= 10;

	while (true) {

		if (n == 1) {
			break;
		}

		if (n % 2 == 0) {
			p = (p * p) % MOD;
			n /= 2;
		}
		else
		{
			k = (k * p) % MOD;
			n--;
		}
	}

	long long result = k * p % MOD;

	cout << result << endl;

	return 0;
}