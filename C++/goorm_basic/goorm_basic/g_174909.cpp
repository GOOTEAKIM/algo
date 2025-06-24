#include <iostream>

using namespace std;
int main() {

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		if (num % m != 0) {
			cout << num * m;
		}
		else {
			cout << num;
		}

		if (i != n - 1) {
			cout << " ";
		}
	}

	return 0;

}