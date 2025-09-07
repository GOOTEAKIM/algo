#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> alis(4);

	for (int i = 0; i < 4; i++) {
		cin >> alis[i];
	}

	sort(alis.begin(), alis.end());

	int ans = (alis[3] - alis[0]) + (alis[2] - alis[1]);

	cout << ans;

	return 0;
}