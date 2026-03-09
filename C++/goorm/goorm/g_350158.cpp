#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	int ans = 0;

	for (int i = 1; i <= n; i++) {

		string word;

		cin >> word;

		if (i == word.length()) ans++;

	}

	cout << ans;

	return 0;
}