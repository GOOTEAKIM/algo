#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n);


	for (int i = 0; i < n; i++) {

		cin >> alis[i];

	}

	vector<bool> isPrime(n + 1, true);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}

	int ans = 0;

	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) ans += alis[i - 1];
	}

	cout << ans;

	return 0;
}