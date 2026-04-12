#include <iostream>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= m; j++) {

			if ((i * j) % 3 == 0) cout << 'X';

			else cout << 'O';

		}
		cout << "\n";
	}

	return 0;
}