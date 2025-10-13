#include <iostream>
#include <string>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	string prim;

	cin >> prim;

	string ans = "";

	for (int i = 0; i < n; i++) {

		int now = (prim[i] - '0') + k;

		string spell = to_string(now);

		ans += spell;

	}

	cout << ans;

	return 0;
}