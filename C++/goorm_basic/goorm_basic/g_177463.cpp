#include <iostream>

using namespace std;
int main() {

	int n;

	cin >> n;

	long long ans = 3;

	for (int i = 2; i <= n; i++) {
		ans = ans * 2 % 100000007;
	}

	cout << ans;

	return 0;
}