#include <iostream>	
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n;
	
	cin >> n;

	string ans = "";

	for (int i = 0; i < n; i++) {

		string s, t;

		cin >> s >> t;

		int pos = s.find_first_of("xX");

		if (pos != string::npos) {

			char ch = t[pos];

			ans += toupper(ch);
		}

	}

	cout << ans << endl;

	return 0;
}