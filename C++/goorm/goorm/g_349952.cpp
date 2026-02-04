#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	int cnt = 0;

	for (int i = 0; i < n - 1; i++) {

		for (int j = 0; j < n - 1 - i; j++) {

			if (alis[j] > alis[j + 1]) {

				swap(alis[j], alis[j + 1]);
				cnt++;

			}
		}
	}

	cout << cnt;

	return 0;
}