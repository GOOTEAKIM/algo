#include <iostream>
#include <vector>
#include <algorithm>

// 이분탐색, 두 포인터

using namespace std;

int main() {

	int x;

	cin >> x;

	int n;

	cin >> n;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	int start = 0, end = n - 1;

	sort(alis.begin(), alis.end());

	while (start < end) {

		int sum = alis[start] + alis[end];

		if (sum == x) {

			cout << alis[start] << " " << alis[end];
			return 0;

		}

		else if (sum < x) start++;

		else end--;

	}

	cout << -1;

	return 0;
}