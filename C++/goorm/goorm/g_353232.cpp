#include <iostream>
#include <vector>

// 두 포인터

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	vector<int> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	int start = 0, end = 0, sum = alis[0];

	int ans = 0;

	while (end < n) { // 배열 범위 안이어야 한다

		if (sum < k) { // k보다 작으면 end idx 증가

			end++;

			if (end < n) sum += alis[end];

		}

		else if (sum > k) { // k보다 크면 start idx 증가

			sum -= alis[start];
			start++;

		}
		else { // 같다면? 

			sum -= alis[start];

			start++;
			end++;

			if (end < n) sum += alis[end];

			ans++;

		}

	}

	cout << ans;

	return 0;
}