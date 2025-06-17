#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;

	cin >> n;

	string k;

	cin >> k;

	int ans = 0;

	int len = k.size();

	for (int i = 0; i < n; i++) {

		string num;

		cin >> num;

		bool flag = true;

		for (int i = 0; i < num.size() - len + 1; i++) {

			string next = num.substr(i, len);

			if (k == next) {
				flag = false;
				break;
			}

		}

		if (flag) ans++;

	}

	cout << ans;

	return 0;
}