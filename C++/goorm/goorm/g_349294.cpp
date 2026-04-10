#include <iostream>

using namespace std;

int main() {

	string word;

	cin >> word;

	int cnt = 0, ans = 0;

	for (int i = 0; i < word.length(); i++) {

		char now = word[i];

		cnt++;

		if (now == 'G') ans += cnt;

		else if (now == 'E') ans += (cnt * 2);

		else if (now == 'P') ans += (cnt * 3);

		else cnt = 0;

	}

	cout << ans;

	return 0;
}