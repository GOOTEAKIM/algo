#include <iostream>

using namespace std;

int main() {

	int n;

	string a, b;

	cin >> n >> a >> b;

	int cnt = 0;

	for (int i = 0; i < n; i++) if (a[i] != b[i]) cnt++;

	cout << cnt;

	return 0;
}