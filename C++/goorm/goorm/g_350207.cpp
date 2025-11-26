#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 4; i++) {

		int x, y;

		cin >> x >> y;

		if (i == 3) continue;

		cout << x - y;

		if (i != 2) cout << "\n";

	}

	return 0;
}