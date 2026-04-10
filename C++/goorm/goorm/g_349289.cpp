#include <iostream>

using namespace std;

int main() {

	string word;

	cin >> word;

	int cnt = 0, ans = 0;

	for (int i = 0; i < word.length(); i++) {

		char now = word[i];

		if (now == 'X') cnt = 0;

		else {

			cnt++;
			ans += cnt;

		}

	}

	cout << ans;

	return 0;
}
