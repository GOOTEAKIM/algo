#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	double mil = 0;
	int idx = 0, weight = 0;

	for (int i = 0; i < n; i++) {

		double w, v;

		cin >> w >> v;

		double den = w / v;

		if (den > mil) {

			idx = i + 1;
			weight = w;
			mil = den;

		}
		else if (den == mil) {
			if (w > weight) {

				idx = i + 1;
				weight = w;

			}
		}
	}

	cout << idx;

	return 0;
}