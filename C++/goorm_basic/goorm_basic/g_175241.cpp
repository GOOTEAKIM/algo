#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	queue<int> q;

	for (int i = 0; i < n; i++) {

		string order;

		cin >> order;

		if (order == "push") {

			int num;

			cin >> num;

			if (q.size() == k) {
				cout << "Overflow" << "\n";
			}
			else {
				q.push(num);
			}


		}
		else { // pop ÀÏ ¶§

			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else {
				cout << "Underflow" << "\n";
			}

		}

	}

	return 0;
}