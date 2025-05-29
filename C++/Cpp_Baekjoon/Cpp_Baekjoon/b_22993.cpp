#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	vector<long long> arr;

	long long ans = 0;

	for (int i = 0; i < n; i++) {

		long long num;
		
		cin >> num;

		if (i == 0) {
			ans = num;
		}

		else
		{
			arr.push_back(num);
		}

	}

	sort(arr.begin(), arr.end());

	bool win = true;

	for (int i = 0; i < arr.size(); i++) {

		if (ans > arr[i]) {

			ans += arr[i];

		}

		// 비겨도 실패
		else if (ans <= arr[i]) {
			win = false;
			break;
		}

	}

	cout << (win ? "Yes" : "No");

	return 0;
}