#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	long long t;
	cin >> n >> k >> t;

	vector<long long> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());

	// 1 5 10 15 24

	int cnt = 0;

	priority_queue<long long> pq;

	for (int i = 0; i < k; i++) {

		while (cnt < n && arr[cnt] < t) {

			pq.push(arr[cnt]);
			cnt++;
		}
		if (pq.empty()) break;

		t += pq.top();
		pq.pop();
	}

	cout << t;
}
