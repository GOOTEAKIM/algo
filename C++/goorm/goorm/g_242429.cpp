#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		int a, b;

		cin >> a >> b;

		if (a < b) {
			cout << "Sunflower";
		}
		else if (a == b) {
			cout << "Tulip";
		}
		else {
			cout << "Rose";
		}

		if (i == n - 1) continue;

		cout << "\n";

	}

	return 0;
}