#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr;

	while(n--) {

		vector<int> alis(5);

		for (int i = 0; i < 5; i++) {
			cin >> alis[i];
		}

		int num = 0;

		for (int j = 0; j < 3; j++) {
			for (int k = j + 1; k < 4; k++) {
				for (int p = k + 1; p < 5; p++) {

					int total = alis[j] + alis[k] + alis[p];

					total %= 10;

					if (total > num) {
						num = total;
					}

				}
			}
		}

		arr.push_back(num);
	}

	int ans = 0;

	int idx = 0;

	for (int i = 0; i< arr.size(); i++) {
		if (arr[i] >= ans) {
			idx = i;

			ans = arr[i];
		}
	}

	cout << idx + 1;

	return 0;
}