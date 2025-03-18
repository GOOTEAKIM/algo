#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	vector<int>arr;
	
	int sum = 0; // ÃÑ ÇÕ

	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;

		arr.push_back(num);

		sum += num;
	}

	int result=0;

	int low, mid, high;

	low = 1, high = sum;

	int total = 0;

	while (low <= high) {

		mid = (low + high) / 2;

		total = mid;

		bool pass = true;

		int cnt = 1;

		for (int i = 0; i < n; i++) {
			int money = arr[i];

			if (money > mid) {
				pass = false;
				break;
			}

			if (money > total) {
				total = mid;
				cnt++;

				//cout << total << "\n";
			}
			total -= money;
		}

		if (!pass || cnt > m) {
			low = mid + 1;
		}
		else
		{
			result = mid;
			high = mid - 1;
		}

	}

	cout << result;

	return 0;
}

