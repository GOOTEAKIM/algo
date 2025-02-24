#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

	int n, s;

	cin >> n >> s;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = INT_MAX;

	int start = 0, finish = 0, sum = 0;

	while (true) {

		if (sum >= s) {

			ans = min(ans, finish - start);
			sum -= arr[start];
			start++;
		}
		else if (finish == n) {
			// 다 돌았을 때
			break;
		}
		else
		{
			sum += arr[finish];
			finish++;
		}

	}
	
	if (ans == INT_MAX) {
		cout << 0;
	}
	else
	{
		cout << ans;
	}

	return 0;
}