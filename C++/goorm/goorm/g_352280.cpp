#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

int main() {

	int a, b, q;

	cin >> a >> b >> q;

	int ans = 0;

	for (int i = 1; i <= q; i++) {

		if (i % 2 == 1) ans += a;
		else ans -= b;

	}

	cout << abs(ans);

	return 0;
}