#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	long long ans = 0;

	for (int i = 0; i < n; i++) {

		long long num;

		cin >> num;

		if (num % k != 0) ans += num;
	}

	cout << ans;

	return 0;
}