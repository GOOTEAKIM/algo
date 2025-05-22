#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	for(int i = 1; i <= t; i++) {

		int p;

		long long q;

		cin >> p >> q;

		long long a = 1, b = 1, ans = 0;

		if (p > 2) {

			
			for (int i = 3; i <= p; i++) {

				long long temp = (a + b) % q;
				a = b;
				b = temp;
			}

			ans = b;
		}
		else {
			ans = 1 % q;
		}

		cout << "Case #" << i << ": " << ans << "\n";

	}

	return 0;
}