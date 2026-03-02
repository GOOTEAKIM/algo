#include <iostream>

using namespace std;

int main() {

	int a, p1, r, p2;

	cin >> a >> p1 >> r >> p2;

	double a_price = a * p2;

	double b_price = (r * r * 3.14) * p1;

	if (a_price > b_price) cout << 1;

	else cout << 2;

	return 0;
}