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

	sort(arr.begin(), arr.end());

	int m;

	cin >> m;

	vector<int> prim(m);

	for (int i = 0; i < m; i++) {

		cin >> prim[i];

	}

	for (int i = 0; i < m; i++) {

		int num = prim[i];

		int front = 0;
		int back = n - 1;

		bool found = false;

		while (front <= back) {

			int mid = (front + back) / 2;

			if (arr[mid] == num) {
				found = true;
				break;
			}
			else if (arr[mid] < num) {
				front = mid + 1;
			}
			else
			{
				back = mid - 1;
			}

		}

		cout << (found ? 1 : 0) << "\n";

	}

	return 0;
}