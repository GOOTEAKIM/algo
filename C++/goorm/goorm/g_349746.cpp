#include <iostream>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	string drug;

	cin >> drug;

	int ans = 0;

	for (char next : drug) if (next == '@') ans++;

	ans -= k;

	cout << ans;

	return 0;
}