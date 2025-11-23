#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n, l;

	cin >> n >> l;

	vector<int> alis(n);
	
	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis.begin(), alis.end());

	int ans = 1;

	int cover = alis[0] + l - 1;

	for (int i = 1; i < n; i++) {

		if (alis[i] > cover) {
			ans++;
			cover = alis[i] + l - 1;
		}

	}

	cout << ans;

	return 0;
}