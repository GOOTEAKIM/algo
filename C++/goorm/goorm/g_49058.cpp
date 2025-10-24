#include <iostream>

using namespace std;

int main() {

	long long n, m;

	cin >> n >> m;

	long long st = (n / 20) * (m / 40);

	long long nd = (n / 40) * (m / 20);

	long long ans = st + nd;

	long long square = 2 * (n / 40) * (m / 40);

	cout << ans - square;

	return 0;
}