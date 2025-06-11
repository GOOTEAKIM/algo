#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);	

	int n;

	long long s;

	cin >> n >> s;

	vector<long long> arr(n);

	vector<long long> diff(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		diff[i] = abs(arr[i] - s);
	}

	if (n == 1) {
		cout << arr[0] - s;
		return 0;
	}

	long long ans = diff[0];

	for (int i = i; i < n; i++) {
		
		ans = gcd(diff[i], ans);

	}

	cout << ans;

	return 0;
}
