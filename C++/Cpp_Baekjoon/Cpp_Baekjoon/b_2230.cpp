#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

	int n;

	long long m;

	cin >> n >> m;

	vector<long long> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	long long ans = LLONG_MAX;

	int start = 0, finish = 0;

	while (finish < n) {

		long long diff = arr[finish] - arr[start];

		if (diff >= m) {
			ans = min(ans, diff);
			start++;
		}
		else
		{
			finish++;
		}
		
		if (start == n) break;
	}

	cout << ans;

	return 0;
}
