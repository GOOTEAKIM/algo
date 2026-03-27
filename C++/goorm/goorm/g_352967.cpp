#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> x(4), y(4);

	for (int i = 0; i < 4; i++) cin >> x[i] >> y[i];

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	int x_diff = x[3] - x[0], y_diff = y[3] - y[0];

	if (x_diff == y_diff) cout << "yes";

	else cout << "no";

	return 0;
}