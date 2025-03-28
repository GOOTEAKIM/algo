#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> arr(n);

	for (int i = 0; i < n; i++) {
		int weight, tall;

		cin >> weight >> tall;

		arr[i] = { weight,tall };
	}

	for (int i = 0; i < n; i++) {
		int rank = 1;

		for (int j = 0; j < n; j++) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) {
				rank++;
			}
		}
		cout << rank << " ";
	}

	return 0;
}

