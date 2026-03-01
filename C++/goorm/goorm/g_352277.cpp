#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	while (n--) {

		vector<int> alis(5);

		for (int i = 0; i < 5; i++) cin >> alis[i];

		int max_num = *max_element(alis.begin(), alis.end());

		vector<int> cnt(max_num + 1, 0);

		for (auto next : alis) {

			cnt[next]++;

		}

		int st = 0, nd = 0, rd = 0, fourth = 0;

		for (auto next : cnt) {

			if (next == 1) st++;
			else if (next == 2) nd++;
			else if (next == 3) rd++;
			else if (next == 4) fourth++;

		}

		if (rd == 1) {

			if (nd == 1) cout << "Yes";

			else if (st >= 1) cout << "Yes";

			else cout << "No";

		}
		else if (nd == 2) {

			if (st == 1) cout << "Yes";

			else cout << "No";

		}
		else if (fourth == 1) cout << "Yes";

		else cout << "No";

		cout << "\n";
	}

	return 0;
}