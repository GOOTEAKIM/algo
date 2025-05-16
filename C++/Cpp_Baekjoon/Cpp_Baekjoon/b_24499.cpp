#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;

	cin >> n >> k;

	vector<int> arr(2 * n,0);

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		arr[i] = num;

		arr[i + n] = num;

	}

	int window = 0;

	for (int i = 0; i < k; i++) {
		window += arr[i];
	}

	int ans = window;

	for (int i = k; i < 2 * n; i++) {

		window += arr[i] - arr[i - k];

		ans = max(ans, window);
	}

	cout << ans;

	return 0;
}