#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<vector<int>> arr(n, vector<int>(3));

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < 3; j++) {

			cin >> arr[i][j];
		}

	}
	
	for (int i = 1; i < n; i++) {

		for (int j = 0; j < 3; j++) {

			int min_val = INT_MAX;

			for (int k = 0; k < 3; k++) {

				if (k != j) {
					min_val = min(min_val, arr[i - 1][k]);
				}

			}
			arr[i][j] += min_val;
		}

	}

	cout << *min_element(arr[n - 1].begin(), arr[n - 1].end());

	return 0;
}