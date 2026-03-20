#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int r, c, w;

	cin >> r >> c >> w;

	int len = r + w - 1;

	vector<vector<int>> alis(len);

	alis[0].push_back(1);

	for (int i = 1; i < len; i++) {

		alis[i].push_back(1);

		for (int j = 1; j < i; j++) {

			int now = alis[i - 1][j - 1] + alis[i - 1][j];

			alis[i].push_back(now);

		}

		alis[i].push_back(1);
	}

	int ans = 0;

	for (int i = 0; i < w; i++) {

		for (int j = 0; j <= i; j++) {

			ans += alis[r - 1 + i][c - 1 + j];

		}
	}

	cout << ans;

	return 0;
}

