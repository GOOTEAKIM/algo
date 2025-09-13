#include <iostream>

using namespace std;

int main() {

	long long a, b;

	cin >> a >> b;

	long long total = a * (a + 1) / 2;

	long long ans = total - b;

	cout << ans;

	return 0;
}