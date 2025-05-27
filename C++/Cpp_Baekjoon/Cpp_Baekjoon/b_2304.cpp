#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> arr(n);

	for (int i = 0; i < n; i++) {

		cin >> arr[i].first >> arr[i].second;

	}

	sort(arr.begin(), arr.end());

	int max_h = 0;
	int idx = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i].second > max_h) {

			max_h = arr[i].second;
			idx = i;  
		}
	}

	int ans = 0;

	int left = arr[0].first;
	int height = arr[0].second;

	for (int i = 1; i <= idx; i++) {
		if (arr[i].second >= height) {

			ans += (arr[i].first - left) * height;

			left = arr[i].first;
			height = arr[i].second;

		}
	}

	int right = arr[n - 1].first;
	height = arr[n - 1].second;

	for (int i = n - 2; i >= idx; i--) {

		if (arr[i].second >= height) {

			ans += (right - arr[i].first) * height;

			right = arr[i].first;
			height = arr[i].second;

		}

	}

	ans += max_h;

	cout << ans;

	return 0;
}