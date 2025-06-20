#include <iostream>
#include <algorithm>

using namespace std;
int main() {

	int n;

	cin >> n;

	int ans = 0;

	while (true) {

		if (n >= 40) {
			ans += n / 40;
			n %= 40;
		}
		else if (n >= 20) {
			ans += n / 20;
			n %= 20;
		}
		else if (n >= 10) {
			ans += n / 10;
			n %= 10;
		}
		else if (n >= 5) {
			ans += n / 5;
			n %= 5;
		}
		else {
			ans += n;
			break;
		}

	}

	cout << ans;

	return 0;
}

// 40 20 10 5 1