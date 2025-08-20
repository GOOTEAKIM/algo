#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	long long n;

	cin >> n;

	vector<long long> dp(n + 1, 0);

	for (long long i = 1; i <= n; i++) {
		dp[i] = i * i + dp[i - 1];
	}

	cout << dp[n];

	return 0;
}