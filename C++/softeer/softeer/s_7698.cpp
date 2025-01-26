#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int t;

	cin >> t;
	
	for (int i = 0; i < t; i++) {

		int n;

		cin >> n;

		string ans = "";

		int cnt = n / 5;
		int rest = n % 5;

		for (int j = 0; j < cnt; j++) {
			ans += "++++ ";
		}

		for (int k = 0; k < rest; k++) {
			ans += "|";
		}

		cout << ans << endl;
	}


	return 0;
}