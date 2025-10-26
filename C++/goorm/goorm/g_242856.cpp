#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	string ans = "";

	while (n > 0) {

		int mok = n % 2;

		ans += (mok + '0');

		n /= 2;
	}

	reverse(ans.begin(), ans.end());

	cout << ans;

	return 0;
}