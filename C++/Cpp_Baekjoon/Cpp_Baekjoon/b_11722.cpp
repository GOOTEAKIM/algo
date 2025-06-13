#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int> alis(n, 1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {

			if (arr[i] < arr[j]) {
				alis[i] = max(alis[i], alis[j] + 1);

			}

		}
	}

	cout << *max_element(alis.begin(), alis.end());

	return 0;
}