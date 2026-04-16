#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

int main() {

	long long x1, y1, r1;

	cin >> x1 >> y1 >> r1;

	long x2, y2, r2;

	cin >> x2 >> y2 >> r2;

	long long len = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

	long long dist = r1 + r2;

	if (dist * dist >= len) cout << "YES";

	else cout << "NO";

	return 0;
}