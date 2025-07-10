#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<long long> dp(n + 1, 0);

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;

	if (n < 4) {
		cout << dp[n];
	}
	else {

		for (int i = 4; i <= n; i++) {
			dp[i] = (dp[i - 1] + dp[i - 3]) % 1000000007;
		}

		cout << dp[n] << endl;
	}

	return 0;
}
