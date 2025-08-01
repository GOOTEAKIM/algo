#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	queue<int> q;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		if (q.empty()) {
			q.push(num);
		}
		else {

			int now = q.front();

			int total = num + now;

			if (total == 0) {
				q.pop();
			}
			else {
				q.push(num);
			}

		}

	}

	if (q.empty()) {
		cout << 0;
		return 0;
	}

	int ans = 0;

	while (!q.empty()) {

		int now = q.front();

		ans += now;

		q.pop();

	}

	cout << ans;

	return 0;
}

