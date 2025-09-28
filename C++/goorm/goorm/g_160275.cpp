#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	queue<int> bills;

	for (int i = 0; i < m; i++) {

		string order;
		int money;

		cin >> order >> money;

		if (order == "deposit") {

			n += money;

			if (!bills.empty()) {

				while (!bills.empty() && n >= bills.front()) {

					int now = bills.front();

					n -= now;

					bills.pop();
				}
			}
		}
		else if (order == "pay") {

			if (n >= money) n -= money;

		}
		else if (order == "reservation") {

			if (n < money || !bills.empty()) {

				bills.push(money);

			}
			else {

				n -= money;

			}
		}
	}

	cout << n;

	return 0;
}