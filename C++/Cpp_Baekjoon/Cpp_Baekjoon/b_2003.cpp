#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	long long m;

	cin >> n >> m;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	int ans = 0;

	int st = 0, en = 0;

	long long sum = 0;

	while (en <= n) {

		if (sum < m) {
			sum += alis[en++];
		}
		else if (sum > m) {
			sum -= alis[st++];
		}
		else
		{
			ans++;
			sum += alis[en++];
		}

	}

	cout << ans;

	return 0;
}