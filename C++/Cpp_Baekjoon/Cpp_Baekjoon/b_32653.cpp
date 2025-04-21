#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	long long ans = 1;

	while (n--) {

		int num;

		cin >> num;

		ans = lcm(ans, num);

	}

	ans *= 2;

	cout << ans;

	return 0;
}