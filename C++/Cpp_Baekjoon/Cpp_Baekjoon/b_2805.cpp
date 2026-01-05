#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m;

	cin >> n >> m;

	vector<long long> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	long long start = 0;
	long long finish = *max_element(alis.begin(), alis.end());

	long long mid = 0;

	long long ans = 0;

	while (start <= finish) {

		mid = (start + finish) / 2;

		long long cnt = 0;

		for (auto next : alis) {

			if (next > mid) cnt += (next - mid);

		}

		if (cnt >= m) {

			ans = mid;

			start = mid + 1;

		}
		else finish = mid - 1;
		
	}

	cout << ans;

	return 0;
}