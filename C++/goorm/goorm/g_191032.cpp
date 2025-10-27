#include <iostream>

using namespace std;

int main() {

	int w, n;

	cin >> w >> n;

	for (int i = 0; i < n; i++) {

		int c, e;

		cin >> c >> e;

		if (c > e && w < 80)	w++;

		else if (c < e && w > 10) w--;

	}

	cout << w;

	return 0;
}