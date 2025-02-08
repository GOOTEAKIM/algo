#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	int mok = n / 5;

	int ans = 10000;

	for (int i = mok; i >= 1; i--) {

		int cnt = 0;

		if ((n - (5 * i)) % 2 == 0) {
			cnt += i;
			cnt += ((n - (5 * i)) / 2);

		}

		if (cnt < ans && cnt != 0) {
			ans = cnt;
		}
		
	}

	if (ans == 10000) {
		cout << -1 << "\n";
	}
	else
	{
		cout << ans << "\n";
	}

	return 0;
}