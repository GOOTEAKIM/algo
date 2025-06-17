#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	long long ans = 1;

	for (int i = 1; i <= n; i++) {
		ans = (ans * i) % 1000000007;
	}

	cout << ans;

	return 0;
}