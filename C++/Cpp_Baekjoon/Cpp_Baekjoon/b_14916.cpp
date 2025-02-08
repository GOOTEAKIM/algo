#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	int ans = 100000;

	for (int i = 0; i *5 <= n; i++) {

		int remain = n - (i * 5);

		if (remain % 2 == 0) {
			int cnt = i + (remain / 2);

			ans = min(ans, cnt);
		}
		
		
	}

	if (ans == 100000) {
		cout << -1 << "\n";
	}
	else
	{
		cout << ans << "\n";
	}

	return 0;
}