#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

	int t;

	cin >> t;

	int ans = 0;

	while (t--) {

		int a, b;

		char cal;

		cin >> a >> cal >> b;

		int total = 0;

		if (cal == '+') {

			total = (a + b);
			ans += total;

		}
		else if (cal == '-') {

			total = (a - b);
			ans += total;

		}
		else if (cal == '*') {

			total = (a * b);
			ans += total;

		}
		else if (cal == '/') {

			total = (a / b);
			ans += total;

		}

	}

	cout << ans;

	return 0;
}