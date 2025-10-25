#include <iostream>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	int ans = 0;

	for (int i = 0; i < n; i++) {

		int c, v;

		cin >> c >> v;

		ans += (c * v);
	}

	if (m >= ans) {
		cout << m - ans;
	}
	else {
		cout << "No";
	}

	return 0;
}