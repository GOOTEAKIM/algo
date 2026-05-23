#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int j, n;

	cin >> j >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) {

		int r, c;

		cin >> r >> c;

		int area = r * c;

		alis[i] = area;

	}

	sort(alis.rbegin(), alis.rend());

	int ans = 0, cost = 0;

	for (auto next : alis) {

		cost += next;
		ans++;

		if (cost >= j) break;

	}

	if (cost < j) cout << -1;

	else cout << ans;

	return 0;
}