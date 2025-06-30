#include <iostream>
#include <vector>

using namespace std;
int main() {

	int n, k;

	cin >> n >> k;

	vector<int> arr;

	while (n--) {

		string order;

		cin >> order;

		if (order == "push") {

			int num;

			cin >> num;

			if (arr.size() == k) {
				cout << "Overflow" << "\n";
			}
			else {
				arr.push_back(num);
			}
		}
		else { // pop ÀÏ ¶§

			if (!arr.empty()) {
				cout << arr.back() << "\n";
				arr.pop_back();
			}
			else {
				cout << "Underflow" << "\n";
			}

		}

	}

	return 0;
}