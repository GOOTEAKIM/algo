#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}

	sort(arr.begin(), arr.end());

	int ans = INT_MAX;

	int start = 0;
	int finish = n - 1;

	int result_start = 0;
	int result_final = 0;

	while (start < finish) {

		int num = arr[finish] + arr[start];

		if (abs(num) < ans) {
			ans = abs(num);

			result_start = arr[start];
			result_final = arr[finish];
			
			
		}

		if (num < 0) {
			start++;
		}
		else
		{
			finish--;
		}
	}

	cout << result_start << " " << result_final;

	return 0;
}







