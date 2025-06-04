#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n;

	cin >> n;

	priority_queue<int, vector<int>> pq;

	int prim;

	cin >> prim;

	if (n == 1) {
		cout << 0;
		return 0;
	}

	for (int i = 1; i < n; i++) {
		int num;

		cin >> num;

		pq.push(num);
	}

	int cnt = 0;

	while (prim <= pq.top()) {

		int now = pq.top();
		pq.pop();

		pq.push(now - 1);
		
		prim++;
		cnt++;

	}

	cout << cnt;

	return 0;
}