#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		queue<pair<int, int>> q;

		priority_queue<int> pq; 

		for (int i = 0; i < n; i++) {

			int x;
			cin >> x;

			q.push({ i, x }); 

			pq.push(x);      
		}

		int order = 0;

		while (!q.empty()) {
			int idx = q.front().first;
			int importance = q.front().second;
			q.pop();

			if (importance == pq.top()) {
				
				pq.pop();
				order++;
				if (idx == m) {
					cout << order << '\n';
					break;
				}
			}
			else {
				
				q.push({ idx, importance });
			}
		}
	}

	return 0;
}
