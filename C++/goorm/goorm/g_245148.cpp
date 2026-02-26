#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	char a, b;

	cin >> a >> b;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {

			int now = i * j;

			if (now % 2 == 0) cout << b;
			else cout << a;

			if (j != n) cout << " ";
		}

		if (i != n) cout << "\n";
	}

	return 0;
}