#include <iostream>
#include <string>

using namespace std;

int main() {

	string n;

	cin >> n;

	int len = n.length() - 1;

	for (int i = 0; i < len / 2; i++) {

		if (n[i] != n[len - i]) {

			cout << "READY";
			return 0;

		}

	}

	cout << "GOORM";

	return 0;
}