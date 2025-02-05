#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string s;
	string p;

	cin >> s >> p;

	int cnt = 0;

	int i = 0;

	while (i < p.length()) {

		int j = 1;

		while (j <= p.length() - i && s.find(p.substr(i, j)) != string::npos) {
			j++;
		}

		i += (j - 1);
		cnt++;
	}

	cout << cnt << "\n";

	return 0;
}

