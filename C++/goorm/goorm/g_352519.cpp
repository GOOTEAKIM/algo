#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<bool> alis(1000000001, false);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		long long now;

		cin >> now;

		alis[now] = true;

	}

	for (long long i = 1; i <= 1000000001; i++) {

		if (!alis[i]) {

			cout << i;
			return 0;

		}

	}

	return 0;
}