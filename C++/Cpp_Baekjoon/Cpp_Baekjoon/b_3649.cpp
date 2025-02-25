#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	long long x;

	while (cin >> x) { // 입력이 있을 때만 반복문 실행

		x *= 10000000;

		long long  n;

		cin >> n;

		vector<long long> arr(n);

		for (long long i = 0; i < n; i++) {
			cin >> arr[i];
		}

		sort(arr.begin(), arr.end());

		int start = 0;

		int finish = n - 1;

		bool found = false;

		while (start < finish) {

			if (arr[start] + arr[finish] > x) {
				finish--;
			}
			else if (arr[start] + arr[finish] < x) {
				start++;
			}
			else
			{
				cout << "yes " << arr[start] << " " << arr[finish] << "\n";
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "danger" << "\n";
		}
	}

	return 0;
}
