#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis(n);

	string ans = "";

	for (int i = 0; i < n; i++) cin >> alis[i];

	int k;

	cin >> k;

	for (auto next : alis) {

		if ((next - k) < 65) next += 26;

		next -= k;

		char now = (char)next;

		ans += now;

	}

	cout << ans;

	return 0;
}