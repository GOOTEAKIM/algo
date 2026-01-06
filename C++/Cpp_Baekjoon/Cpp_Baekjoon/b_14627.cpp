#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int s, c;

	cin >> s >> c;

	vector<long long> alis(s);

	long long total = 0;

	for (int i = 0; i < s; i++) {

		cin >> alis[i];

		total += alis[i];

	}

	long long start = 1;
	long long finish = *max_element(alis.begin(), alis.end());

	long long ans = 0;

	long long mid = 0;

	while (start <= finish) {

		mid = (start + finish) / 2;

		long long cnt = 0;

		for (auto next : alis) cnt += (next / mid);

		if (cnt >= c) {

			ans = mid;
			start = mid + 1;

		}
		else {
			finish = mid - 1;
		}

	}

	cout << total - (ans * c);

	return 0;
}