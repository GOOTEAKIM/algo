#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	double salt = n * 7 / 100.0;

	double ans = salt / (n + m) * 100.0;

	ans = floor(ans * 100) / 100.0;

	printf("%.2f", ans);

	return 0;
}