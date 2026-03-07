#include <iostream>

using namespace std;

int main() {

	long long x, t;

	int a, b;

	cin >> x >> a >> b >> t;

	x = x + (b - a) * t;

	cout << x;

	return 0;
}