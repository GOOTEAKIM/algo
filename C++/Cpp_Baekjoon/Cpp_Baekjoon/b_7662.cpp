#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;

	while(t--) {

		int k;

		cin >> k;

		multiset<int> dq;

		for (int i = 0; i < k; i++) {

			char command;
			int value;

			cin >> command >> value;

			if (command == 'I') {
				dq.insert(value);
			}

			else
			{

				if (!dq.empty()) {

					if (value == 1) {

						auto it = prev(dq.end());

						dq.erase(it);
					}
					else
					{
						dq.erase(dq.begin());
					}
				}
			}

		}

		if (dq.empty()) {
			cout << "EMPTY" << "\n";
		}

		else
		{
			cout << *dq.rbegin() << " " << *dq.begin() << "\n";
		}

	}

	return 0;
}