#include <iostream>
#include <vector>

using namespace std;

int main() {

	int ans = 1;

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	int now = 0;

	for (int i = 1; i < n; i++) {

		int next = alis[i];

		now = alis[i - 1];

		if (next - now != 1) ans++;

	}

	cout << ans;

	return 0;
}