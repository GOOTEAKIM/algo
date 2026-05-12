#include <iostream>

using namespace std;

int main() {

	int n, p;

	cin >> n >> p;

	int ans = -1;

	for (int i = 0; i < n; i++) {

		int ai, bi;

		cin >> ai >> bi;

		if (bi >= p) {

			if (ai > ans) ans = ai;

		}

	}

	if (ans == -1) cout << "Hungry";

	else cout << ans;

	return 0;
}