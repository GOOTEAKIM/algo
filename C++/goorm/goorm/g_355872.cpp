#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<string> alis(8);

	for (int i = 0; i < 8; i++) {
		cin >> alis[i];
	}

	int ans = 0;

	for (int i = 0; i < 8; i++) {

		for (int j = 0; j < 8; j++) {

			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
				if (alis[i][j] == '1') ans++;
			}

		}
	}

	cout << ans;

	return 0;
}