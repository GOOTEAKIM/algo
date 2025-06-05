#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n;

	cin >> n;

	long long ans = 1;

	for (int i = 2; i <= n; i++) {
		ans *= i;

		ans %= 10000000;

		while (ans % 10 == 0) {
			ans /= 10;
		}
	}

	cout << ans % 10;

	return 0;
}