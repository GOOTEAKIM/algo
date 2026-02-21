#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = n; i > 0; i--) {

		for (int j = 0; j < i - 1; j++)	cout << "O";

		for (int j = 0; j < n - (i - 1); j++) cout << "X";

		if (n != 1) cout << "\n";

	}

	return 0;
}