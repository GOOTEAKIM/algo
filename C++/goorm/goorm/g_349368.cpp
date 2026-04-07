#include <iostream>

using namespace std;

int main() {

	int h, m;

	cin >> h >> m;

	int c;

	cin >> c;

	int add_h = c / 60, add_m = c % 60;

	m += add_m;

	if (m >= 60) {

		h++;
		m -= 60;

	}

	h += add_h;

	if (h >= 24) h -= 24;

	cout << h << " " << m;

	return 0;
}