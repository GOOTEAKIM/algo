#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

int main() {

	int n, w, h;

	cin >> n >> w >> h;

	double len = sqrt(w * w + h * h);

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		if (len >= num) cout << "Yes";
		else cout << "No";

		if (i != n - 1) cout << "\n";
	}

	return 0;
}