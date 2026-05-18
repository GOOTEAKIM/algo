#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	int ans = 0;

	for (int i = 0; i < n; i++) {

		vector<int> alis(3);

		for (int j = 0; j < 3; j++) cin >> alis[j];

		sort(alis.begin(), alis.end());

		if (alis[2] * alis[2] == (alis[1] * alis[1] + alis[0] * alis[0])) ans++;

	}

	cout << ans;

	return 0;
}