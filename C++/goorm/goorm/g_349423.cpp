#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n + 1, 0);

	for (int i = 1; i <= n; i++) alis[i] = i;

	for (int i = 1; i <= n; i++) {

		if (i % 2 == 1) {

			if (i == n) continue;

			swap(alis[i], alis[i + 1]);

			i++;

		}

	}

	for (int i = 1; i <= n; i++) {

		cout << alis[i];

		if (i != n) cout << " ";

	}

	return 0;
}