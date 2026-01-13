#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	sort(alis.rbegin(), alis.rend());

	for (int i = 0; i < n; i++) {

		cout << alis[i];

		if (i != n - 1) cout << "\n";

	}

	return 0;
}