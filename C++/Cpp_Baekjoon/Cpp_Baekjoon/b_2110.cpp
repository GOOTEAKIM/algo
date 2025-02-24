#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, c;

	cin >> n >> c;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int start = 1; // 최소 거리

	int finish = arr.back() - arr[0]; // 최대 거리
	
	int ans = 0;

	int mid = 0;

	while (start <= finish) {

		int cnt = 1; // 공유기 개수

		int now = arr[0]; // 가장 최근 설치한 공유기 위치

		mid = (start + finish) / 2;

		now = arr[0];

		for (int i = 1; i < n; i++) {

			if (arr[i] - now >= mid) {

				cnt++;
				now = arr[i];

			}

		}

		if (cnt >= c) {

			ans = max(ans, mid);

			start = mid + 1;
		}
		else
		{
			finish = mid - 1;
		}

	}

	cout << ans;

	return 0;
}