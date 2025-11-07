#include <iostream>
#include <vector>

using namespace std;

int main() {

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int n;

		cin >> n;

		vector<int> alis(n);

		double avg = 0;

		for (int j = 0; j < n; j++) {

			cin >> alis[j];

			avg += alis[j];
		}

		avg /= n;

		int ans = 0;

		for (auto next : alis) {
			if (next >= avg) ans++;
		}

		cout << ans << "/" << n;

		if (i != t - 1) cout << "\n";
	}

	return 0;
}