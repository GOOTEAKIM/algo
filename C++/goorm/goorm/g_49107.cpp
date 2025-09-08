#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, t;

	cin >> n >> t;

	vector<int> alis;

	alis.push_back(0);

	for (int i = 0; i < n; i++) {

		int s, d;

		cin >> s >> d;

		if (s < t) {
			while (s < t) {
				s += d;
			}
		}
		alis.push_back(s);
	}

	int idx = t + 1;
	int diff = 10000000;

	for (int i = 1; i < alis.size(); i++) {

		if (alis[i] < diff) {
			diff = alis[i];

			idx = i;
		}
		else if (alis[i] == diff) {

			if (i < idx) {
				idx = i;
			}

		}
	}

	cout << idx;

	return 0;
}

