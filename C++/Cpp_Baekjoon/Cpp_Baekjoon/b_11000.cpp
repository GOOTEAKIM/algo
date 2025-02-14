#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> arr(n);

	for (int i = 0; i < n; i++) {

		int s, t;

		cin >> s >> t;

		arr[i] = { s,t };

	}

	sort(arr.begin(), arr.end());

	priority_queue<int, vector<int>, greater<int>> pq;

	pq.push(arr[0].second);

	for (int i = 1; i < n; i++) {

		if (arr[i].first >= pq.top()) {
			pq.pop();
		}

		pq.push(arr[i].second);

	}

	cout << pq.size();

	return 0;
}