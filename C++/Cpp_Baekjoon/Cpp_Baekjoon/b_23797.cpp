#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string s;

	cin >> s;	

	int k = 0, p = 0;

	int ans = 1;

	if (s[0] == 'K') k++;
	else p++;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'K') {
			k++;
			if (p) p--;
		}
		else
		{
			p++;
			if (k) k--;
		}

		ans = max(ans, max(k, p));

	}

	cout << ans;

	return 0;
}

