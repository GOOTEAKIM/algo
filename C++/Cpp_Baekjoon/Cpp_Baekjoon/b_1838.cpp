#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	vector<pair<int, int>> alis(n);

	for (int i = 0; i < n; i++) {

		cin >> alis[i].first;

		alis[i].second = i;
	}

	sort(alis.begin(), alis.end());

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans = max(ans, alis[i].second - i);
	}

	cout << ans;

	return 0;
}

//30 10 44 27 49
//0   1  2  3 4
//
//-2  1  -1 2  0
//
//10 30 44 27 49
//
//10 30 27 44 49
//
//10 27 30 44 49
//
//0   1  2  3  4

