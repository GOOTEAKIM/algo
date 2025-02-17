#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n, l;

	cin >> n >> l;

	for (int len = l; len <= 100; len++) {

		int temp = n - (len * (len - 1) / 2);

		if (temp < 0 || temp % len != 0) continue;

		int x = temp / len;

		if (x >= 0) {
			for (int i = 0; i < len; i++) {

				cout << x + i;

				if (i < len - 1) cout << " ";
	
			}
			return 0;
		}

	}

	cout << -1;

	return 0;
}
