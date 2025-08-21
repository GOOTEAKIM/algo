#include <iostream>

using namespace std;

int main() {

	int w, r;

	cin >> w >> r;

	long long ans = w * (30 + r) / 30;

	cout << ans;

	return 0;
}