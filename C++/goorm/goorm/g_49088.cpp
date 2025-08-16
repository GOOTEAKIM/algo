#include <iostream>

using namespace std;
int main() {

	int a, b;

	cin >> a >> b;

	int d;

	cin >> d;

	for (int i = 0; i < d; i++) {

		if (i % 2 == 0) {

			int rest;

			if (a % 2 == 0) {

				rest = a / 2;

			}
			else {

				rest = (a + 1) / 2;

			}

			b += rest;
			a -= rest;
		}
		else {

			int rest;

			if (b % 2 == 0) {

				rest = b / 2;

			}
			else {

				rest = (b + 1) / 2;

			}

			b -= rest;
			a += rest;
		}

	}

	cout << a << " " << b;

	return 0;
}