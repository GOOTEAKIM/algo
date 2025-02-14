#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <numeric>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	priority_queue<long long, vector<long long>, greater<long long>> pq;

	for (int i = 0; i < n; i++) {
		long long num;

		cin >> num;

		pq.push(num);
	}

	while (m--) {

		long long x = pq.top();
		pq.pop();

		long long y = pq.top();
		pq.pop();

		long long sum = x + y;

		pq.push(sum);
		pq.push(sum);

	}

	long long ans = 0;

	while (!pq.empty()) {
		ans += pq.top();
		pq.pop();
	}

	cout << ans << "\n";

	return 0;
}