#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		int a, b;

		cin >> a >> b;

		cout << a + b;

		if (i != n - 1) cout << "\n";
	}

	return 0;
}