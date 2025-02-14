#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	priority_queue<int, vector<int>, greater<int>> pq;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.rbegin(), arr.rend());

	for (int i = 0; i < min(m, n); i++) {
		pq.push(arr[i]);
	}

	for (int i = m; i < n; i++) {

		int top = pq.top();

		pq.pop();

		pq.push(top + arr[i]);

	}

	while (pq.size() != 1) {
		pq.pop();
	}

	cout << pq.top();

	return 0;
}