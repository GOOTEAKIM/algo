#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n + 1, 0);

	for (int i = 1; i <= n; i++) cin >> alis[i];

	int l, r;

	cin >> l >> r;

	int ans = 0;

	for (int i = l; i <= r; i++) if (alis[i] == 1) ans++;

	cout << ans;

	return 0;
}