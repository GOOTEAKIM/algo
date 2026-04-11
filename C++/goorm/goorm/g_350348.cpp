#include <iostream>

using namespace std;

int main() {

	int h, m;

	cin >> h >> m;

	if (m >= 53) m -= 53;

	else {

		m += 7;
		h--;

		if (h < 0) h += 24;

	}

	cout << h << " " << m;

	return 0;
}