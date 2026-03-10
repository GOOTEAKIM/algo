#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> a(n), b(n);

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++) cin >> b[i];

	long long maximum = 0;

	for (int i = 0; i < n; i++) {

		if (1LL * a[i] * b[i] > maximum) maximum = a[i] * b[i];

	}

	cout << maximum;

	return 0;
}