#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<vector<int>> arr(n);

	for (int i = 0; i < n; i++) {

		arr[i] = vector<int>(i + 1);

		for (int j = 0; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {

			if (j == 0) {
				arr[i][j] += arr[i - 1][j];
			}
			else if (j == arr[i].size() - 1) {
				arr[i][j] += arr[i - 1][j - 1];
			}
			else
			{
				arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
			}

		}
	}

	cout << *max_element(arr[n - 1].begin(), arr[n - 1].end());

	return 0;
}