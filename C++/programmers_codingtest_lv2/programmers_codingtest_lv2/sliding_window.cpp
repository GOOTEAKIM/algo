#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {

	int start = 0;

	int current_sum = 0;

	for (int end = 0; end < arr.size(); end++) {
		current_sum += arr[end];

		while (current_sum > k && start <= end) {

			current_sum -= arr[start];
			start++;

		}

		if (current_sum == k) {
			return { start, end };
		}

	}

	return { -1 };
}


int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans;

	cin >> ans;

	vector<int> result = solution(arr, ans);

	if (result[0] == -1) {
		cout << -1 << "\n";
	}
	else
	{
		cout << result[0] << " " << result[1] << "\n";
	}

	return 0;
}