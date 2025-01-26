#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int k, p, n;

	cin >> k >> p >> n;

	long ans = k;

	for (int i = 0; i < n; i++) {

		ans = ans * p % 1000000007;

	}

	cout << ans << endl;

	return 0;
}