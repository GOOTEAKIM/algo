#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

	int t;

	cin >> t;

	while (t--) {

		ios::sync_with_stdio(false);
		cin.tie(NULL);

		int k;

		cin >> k;

		priority_queue<long long, vector<long long>, greater<long long>> pq;

		for (int i = 0; i < k; i++) {
			long long num;

			cin >> num;

			pq.push(num);
		}

		long long total = 0;

		while (pq.size() > 1) {
			long long first = pq.top();
			pq.pop();
			long long second = pq.top();
			pq.pop();

			long long cost = first + second;
			total += cost;

			pq.push(cost);
		}

		cout << total << "\n";
	}

	return 0;
}
