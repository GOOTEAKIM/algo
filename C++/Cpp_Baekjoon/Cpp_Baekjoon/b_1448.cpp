#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	sort(alis.rbegin(), alis.rend());

	int ans = -1;

	for (int i = 0; i < n - 2; i++) {

		int st = alis[i];
		int nd = alis[i + 1];
		int rd = alis[i + 2];

		if (nd + rd > st) {
			
			ans = st + nd + rd;
			break;

		}

	}

	cout << ans;

	return 0;
}