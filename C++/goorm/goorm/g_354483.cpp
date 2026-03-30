#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	int ans = 0;

	for (int i = 1; i < n; i++) {

		if (alis[i] > alis[i - 1]) ans += (alis[i] - alis[i - 1]);

	}

	cout << ans;

	return 0;
}