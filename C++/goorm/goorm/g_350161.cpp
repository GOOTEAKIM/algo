#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	long long ans = 0;

	while (a < b) {

		ans += c;
		a++;

	}

	cout << ans;

	return 0;
}