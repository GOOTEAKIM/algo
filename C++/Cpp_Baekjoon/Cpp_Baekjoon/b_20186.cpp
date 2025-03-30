#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	long long ans = 0;

	int cnt = 0;

	for (int i = n - k; i < n; i++) {

		ans += arr[i] + cnt--;

	}

	cout << ans;

	return 0;
}
