#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int k) {

	int ans = 0;

	priority_queue<int, vector<int>, greater<int>> pq (scoville.begin(), scoville.end());

	while (pq.top() < k) {

		if (pq.size() < 2) {
			return -1;
		}

		int x = pq.top();
		pq.pop();

		int y = pq.top();
		pq.pop();

		int sum = x + 2 * y;

		pq.push(sum);

		ans++;
	}

	return ans;
}