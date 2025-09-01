#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;

	unordered_set<long long> alis;

	for (int i = 0; i < n; i++) {

		long long x;

		cin >> x;

		alis.insert(x);
	}

	int m;

	cin >> m;

	for (int i = 0; i < m; i++) {

		long long num;

		cin >> num;

		if (alis.find(num) != alis.end()) {
			cout << 1;
		}
		else {
			cout << 0;
		}

		if (i != m - 1) {
			cout << "\n";
		}
	}


	return 0;
}