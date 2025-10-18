#include <iostream>

using namespace std;

int main() {

	int d, l, r;

	cin >> d >> l >> r;

	for (int i = l; i <= r; i++) {

		if (i % d == 0) {
			cout << "Y";
			return 0;
		}

	}

	cout << "N";

	return 0;
}