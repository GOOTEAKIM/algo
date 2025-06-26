#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

	int n;

	cin >> n;

	int total = 0;

	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;

		total += num;
	}

	int cnt = 0;

	int base = 1;

	while (base * 8 <= total) {

		base *= 8;
		cnt++;

	}

	string ans = "";

	while (base > 0) {

		int digit = total / base;

		ans += digit + '0';

		total %= base;

		base /= 8;

	}

	cout << ans;

	return 0;
}

