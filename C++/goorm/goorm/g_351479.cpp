#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

	vector<int> x(3), y(3);

	for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

	int rest_x = 2 * (*max_element(x.begin(), x.end()) + *min_element(x.begin(), x.end())) - accumulate(x.begin(), x.end(), 0);
	int rest_y = 2 * (*max_element(y.begin(), y.end()) + *min_element(y.begin(), y.end())) - accumulate(y.begin(), y.end(), 0);

	cout << rest_x << " " << rest_y;

	return 0;
}