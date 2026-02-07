#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	string word;

	cin >> word;

	int len = word.length();

	string ans = "";

	for (int i = 0; i < len; i++) {

		int now = word[i] - '0';

		if (now % 2 == 0) ans += word[i];

	}

	sort(ans.rbegin(), ans.rend());

	cout << ans;

	return 0;
}