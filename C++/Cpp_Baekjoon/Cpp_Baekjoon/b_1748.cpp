#include <iostream>
#include <string>

using namespace std;

int main() {

	long long n;

	cin >> n;

	long long ans = 0;
	long long start = 1;
	long long digits = 1;

	while (start * 10 <= n) {

		long long end = start * 10 - 1;

		ans += (end - start + 1) * digits;

		start *= 10;

		digits++;

	}
	
	ans += (n - start + 1) * digits;

	cout << ans;

	return 0;
}