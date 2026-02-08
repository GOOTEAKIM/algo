#include <iostream>

using namespace std;

int main() {

	int num;

	cin >> num;

	int ans = 0;

	while (num > 0) {

		int rest = num % 10;
		ans += rest;
		num /= 10;

	}

	cout << ans;

	return 0;
}