#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	int ans = 0;

	int height = 0;

	for (int i = n - 1; i >= 0; i--) {

		int num = alis[i];

		if (num > height) {

			ans++;
			height = num;

		}

	}

	cout << ans;

	return 0;
}