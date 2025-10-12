#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	string a, b;

	cin >> a >> b;

	int len_a = a.length();
	int len_b = b.length();

	string a_reverse = "";
	string b_reverse = "";

	for (int i = len_a - 1; i >= 0; i--) {

		a_reverse += a[i];

	}

	for (int i = len_b - 1; i >= 0; i--) {
		b_reverse += b[i];
	}

	if (a_reverse > b_reverse) {

		cout << a;

	}
	else if (a_reverse < b_reverse) {

		cout << b;

	}

	return 0;
}