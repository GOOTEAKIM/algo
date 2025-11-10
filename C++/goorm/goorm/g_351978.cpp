#include <iostream>

using namespace std;

int main() {

	int a, b;

	cin >> a >> b;

	double ans = a * b / 2.0;

	cout << fixed;

	cout.precision(1);

	cout << ans;

	return 0;
}