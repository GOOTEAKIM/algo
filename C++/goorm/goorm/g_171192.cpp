#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	long long wallet = 0;

	while (n--) {

		string order;

		long long money;

		cin >> order >> money;

		if (order == "in") {

			wallet += money;

		}
		else if (order == "out") {

			wallet -= money;

			if (wallet < 0) {

				cout << "fail";
				return 0;

			}
		}

	}

	if (wallet >= 0) {

		cout << "success";

	}
	else {

		cout << "fail";

	}

	return 0;
}