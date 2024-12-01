#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int t;

	cin >> t;


	for (int i = 0; i < t; i++) {
		int cnt = 0;
		int n, m;
		cin >> n >> m;

		for (int j = n; j <= m; j++) {

			string word = to_string(j);

			for (int k = 0; k < word.length(); k++) {

				if (word[k] == '0') {
					cnt += 1;
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}