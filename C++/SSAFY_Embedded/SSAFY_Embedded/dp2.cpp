#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[11] = { 0,3,2,5,1,2,1,1,2,2,3 };

int dp[11];

int main() {

	dp[0] = arr[0];



	for (int i = 0; i < 11; i++) {

		int a = (i > 2) ? dp[i - 2] + arr[i] : arr[i];
		int b = (i > 3) ? dp[i - 3] + arr[i] : arr[i];

		dp[i] = max(a, b);

	}

	for (int i = 0; i < 11; i++) {
		cout << dp[i] << endl;
	}

	return 0;
}

0	3	2	8	