#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	deque<int> arr;

	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}

	vector<int> order(m);

	for (int i = 0; i < m; i++) {
		cin >> order[i];
	}

	int ans = 0;

	for (int i = 0; i < m; i++) {

		int target = order[i];
		int idx = 0;

		// idx의 위치 확인
		for (int j = 0; j < arr.size(); j++) {
			if (arr[j] == target) {
				idx = j;
				break;
			}
		}

		if (idx <= arr.size() / 2) {

			while (idx--) {
				int num = arr.front();
				arr.pop_front();
				arr.push_back(num);
				ans++;
			}

		}
		else
		{
			int right = arr.size() - idx;

			while (right--) {

				int num = arr.back();
				arr.pop_back();
				arr.push_front(num);
				ans++;
			}
		}

		// 맨 앞 제거
		arr.pop_front();
	}

	cout << ans;

	return 0;
}