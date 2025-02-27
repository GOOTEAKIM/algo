#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n);
	vector<int> dp(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		dp[i] = arr[i];
	}

	int max_sum = arr[0];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {

			if (arr[j] < arr[i]) {
				dp[i] = max(dp[i], dp[j] + arr[i]);
			}

		}
		max_sum = max(max_sum, dp[i]);
	}

	cout << max_sum;

	return 0;
}