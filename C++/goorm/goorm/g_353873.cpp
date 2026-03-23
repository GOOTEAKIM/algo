#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> x(n), y(n);

	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

	int max_x = *max_element(x.begin(), x.end());
	int min_x = *min_element(x.begin(), x.end());

	int max_y = *max_element(y.begin(), y.end());
	int min_y = *min_element(y.begin(), y.end());

	int ans = 2 * ((max_x - min_x) + (max_y - min_y));

	cout << ans;

	return 0;
}