#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n;

	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++) {

		int number;

		cin >> number;

		pq.push(number);

	}

	int ans = 0;

	n -= 1;

	while (n--) {

		int x = pq.top();
		pq.pop();

		int y = pq.top();
		pq.pop();

		int sum = x + y;

		ans += sum;

		pq.push(sum);

	}

	cout << ans;

	return 0;
}

