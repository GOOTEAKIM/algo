#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> arr;

	for (int i = 0; i < n; i++) {

		int x, y;

		cin >> x >> y;

		arr.push_back({ x,y });

	}

	sort(arr.begin(), arr.end());

	priority_queue<int, vector<int>, greater<int>> pq;

	pq.push(arr[0].second);

	for (int i = 1; i < n; i++) {

		if (pq.top() <= arr[i].first) {

			pq.pop();

		}
		pq.push(arr[i].second);
		
	}

	cout << pq.size();

	return 0;
}

