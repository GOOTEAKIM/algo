#include <iostream>
#include <vector>

using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	vector<int> alis(a + b + c + 1, 0);

	for (int i = 1; i <= a; i++) {

		for (int j = 1; j <= b; j++) {

			for (int k = 1; k <= c; k++) {

				int now = i + j + k;

				alis[now]++;
			}
		}
	}

	int maximum = 0;

	int idx = 0;

	for (int i = 3; i < a + b + c + 1; i++) {

		int now = alis[i];

		if (now > maximum) {

			maximum = now;
			idx = i;

		}
	}

	cout << idx;

	return 0;
}