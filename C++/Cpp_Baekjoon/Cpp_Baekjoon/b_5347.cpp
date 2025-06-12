#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
	
	int n;

	cin >> n;

	while (n--) {

		long long a, b;

		cin >> a >> b;

		long long ans = lcm(a, b);

		cout << ans << "\n";
	}

	return 0;
}