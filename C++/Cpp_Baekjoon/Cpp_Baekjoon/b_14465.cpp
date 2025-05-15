#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, k, b;

	cin >> n >> k >> b;

	vector<int> arr(n + 1, 1);

	for (int i = 0; i < b; i++) {
		int num;

		cin >> num;

		arr[num] = 0;
	}

	int window = 0;

	for (int i = 1; i <= k; i++) {
		window += arr[i];
	}

	int ans = window;

	for (int i = k + 1; i <= n; i++) {

		window += arr[i] - arr[i - k];

		ans = max(window, ans);

	}

	ans = k - ans;

	cout << ans;

	return 0;
}


//0 0 1 1 0 1 1 1 0 0
//
//3
//2
//1