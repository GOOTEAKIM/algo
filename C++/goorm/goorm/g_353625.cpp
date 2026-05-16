#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	long long now = 1;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= m; j++) now *= gcd(i, j);

	}

	now %= (1000000007);

	cout << now;

	return 0;
}