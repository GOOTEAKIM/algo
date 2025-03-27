#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n;

	cin >> n;

	priority_queue<int, vector<int>> pq;

	while (n--) {

		int a;

		cin >> a;

		if (a != 0) {

			for (int i = 0; i < a; i++) {
				int number;

				cin >> number;

				pq.push(number);
			}

		}
		else
		{
			if (pq.empty()) {
				cout << -1 << "\n";
			}
			else
			{
				int num = pq.top();

				cout << num << "\n";

				pq.pop();
			}
		}

	}

	return 0;
}