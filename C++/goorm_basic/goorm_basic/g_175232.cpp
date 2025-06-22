#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {

			cout << i * n + j;

			if (j != n) {
				cout << " ";
			}

		}
		cout << "\n";
	}

	return 0;
}