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

	int start = 1; // �ּ� �Ÿ�

	int finish = arr.back() - arr[0]; // �ִ� �Ÿ�
	
	int ans = 0;

	int mid = 0;

	while (start <= finish) {

		int cnt = 1; // ������ ����

		int now = arr[0]; // ���� �ֱ� ��ġ�� ������ ��ġ

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