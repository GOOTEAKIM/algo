#include <iostream>

using namespace std;

int main() {

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int C = d;
	int B = d;
	int A = d;

	if ((C %= c) == 0 || (B %= b) == 0 || (A %= a) == 0) {
		cout << 1;
		return 0;
	}

	while (d >= a) {

		if (d >= c) {
			d %= c;
		}
		else if (d >= b) {
			d %= b;
		}
		else {
			d %= a;
		}

	}

	if (d == 0) cout << 1;
	else cout << 0;

	return 0;
}