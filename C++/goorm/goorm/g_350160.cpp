#include <iostream>

using namespace std;

int main() {

	int left = 0, right = 0, strange = 0;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		int l, r;

		cin >> l >> r;

		if (l == 1 && r == 0) left++;

		else if (l == 0 && r == 1) right++;

		else if (l == 1 && r == 1) strange++;

		else if (l == 0 && r == 0) strange++;

	}

	cout << left << " " << right << " " << strange;

	return 0;
}