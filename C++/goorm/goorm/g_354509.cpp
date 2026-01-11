#include <iostream>

using namespace std;

int main() {

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int ans = 0;

	if (d > c) ans = (a * c) + (d - c) * b;

	else ans = a * d;

	cout << ans;

	return 0;
}