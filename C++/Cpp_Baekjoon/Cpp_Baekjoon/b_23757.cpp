#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	priority_queue<int> q;

	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;

		q.push(num);
	}

	bool flag = true;

	for (int i = 0; i < m; i++) {
		int num;

		cin >> num;

		if (q.top() >= num) {
			q.push(q.top() - num);
			q.pop();
		}
		else
		{
			flag = false;
		}
	}

	cout << (flag ? 1 : 0) << "\n";

	return 0;
}

