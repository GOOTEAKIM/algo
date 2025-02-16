#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int num;

		cin >> num;

		cout << num / 2 + 1 << "\n";

		priority_queue<int, vector<int>> left;
		priority_queue<int, vector<int>, greater<int>> right;

		vector<int> results;

		for (int j = 0; j < num; j++) {

			if (j % 10 == 0) {
				"\n";
			}

			int number;

			cin >> number;

			if (left.empty() || number <= left.top()) {
				left.push(number);
			}
			else
			{
				right.push(number);
			}

			if (left.size() > right.size() + 1) {
				right.push(left.top());
				left.pop();
			}
			else if (right.size() > left.size()) {

				left.push(right.top());
				right.pop();
			}

			if (j % 2 == 0) {
				results.push_back(left.top());
			}

		}

		for (int k = 0; k < results.size(); k++) {
			cout << results[k];

			if ((k + 1) % 10 == 0 || k == results.size() - 1) {
				cout << "\n";
			}
			else
			{
				cout << " ";
			}
		}

	}

	return 0;
}
