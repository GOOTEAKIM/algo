#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	string word;

	cin >> word;

	int cnt = 0;

	bool has_zero = false;

	vector<char> arr;

	int total = 0;

	for (auto spell : word) {
		if (spell == '0') {

			cnt++;

			if (!has_zero) has_zero = true;

		}
		else {
			arr.push_back(spell);

			total += (spell - '0');
		}
	}

	if (!has_zero || (total % 3 != 0)) {
		cout << -1;
	}
	else {

		sort(arr.rbegin(), arr.rend());

		string ans = "";

		for (auto spell : arr) {
			ans += spell;
		}

		for (int i = cnt; i > 0; i--) {
			ans += '0';
		}

		cout << ans;
	}

	return 0;
}