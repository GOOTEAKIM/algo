#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		arr[i] = num;
	}

	vector<int> dp(n);

	dp[0] = arr[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(arr[i], arr[i] + dp[i - 1]);
	}

	int result = *max_element(dp.begin(), dp.end());

	cout << result << endl;

	return 0;
}

