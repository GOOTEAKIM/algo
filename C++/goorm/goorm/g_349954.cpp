#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, t;

	cin >> n >> t;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	for (int i = 0; i < n; i++) {

		if (alis[i] >= t) {

			cout << i + 1;
			return 0;

		}

	}

	return 0;
}