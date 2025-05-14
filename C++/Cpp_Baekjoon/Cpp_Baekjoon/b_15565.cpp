#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;

	cin >> n >> k;

	vector<int> arr;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		// ��� ���� arr�� ��ǲ �޾��� �ʿ䰡 ����
		if (num == 1) {
			arr.push_back(i);
		}
		
	}

	if (arr.size() < k) {
		cout << -1;
	}
	else
	{
		int ans = n;

		for (int i = 0; i <= arr.size() - k; i++) {

			ans = min(ans, arr[i + k - 1] - arr[i] + 1);

		}

		cout << ans;
	}

	return 0;
}

