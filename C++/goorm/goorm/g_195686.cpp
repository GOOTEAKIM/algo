#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<long long> alis(n);

	int mid = 0;

	long long value = 0;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		alis[i] = num;

		if (num >= value) {

			value = num;

			mid = i;
		}


	}

	bool bigger = true;
	bool smaller = true;

	long long b = alis[mid];
	long long s = alis[mid];

	for (int i = mid + 1; i < n; i++) {

		long long now = alis[i];

		if (now <= b) {
			b = now;
		}
		else {
			bigger = false;

			cout << 0;
			return 0;
		}

	}

	for (int i = mid - 1; i >= 0; i--) {

		long long now = alis[i];

		if (now <= s) {
			s = now;
		}
		else {
			smaller = false;

			cout << 0;

			return 0;
		}

	}

	long long ans = accumulate(alis.begin(), alis.end(), 0LL);

	cout << ans;

	return 0;
}