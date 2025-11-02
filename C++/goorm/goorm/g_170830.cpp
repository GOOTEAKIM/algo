#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	cout << a;

	if (a < b) {
		cout << "<";
	}
	else if (a > b) {
		cout << ">";
	}
	else {
		cout << "==";
	}

	cout << b;

	if (b < c) {
		cout << "<" << c;
	}
	else if (b > c) {
		cout << ">" << c;
	}
	else {
		cout << "==" << c;
	}

	return 0;
}