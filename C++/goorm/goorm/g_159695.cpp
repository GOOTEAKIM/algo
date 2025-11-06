#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<string> alis(n + 1);

	alis[0] = "";

	for (int i = 1; i <= n; i++) {

		string word = "";

		for (int j = n; j > i; j--) {
			word += " ";
		}

		for (int j = 0; j < i; j++) {
			word += "*";
		}

		alis[i] = word;
	}

	for (int i = 1; i <= n; i++) {
		cout << alis[i] << "\n";
	}

	for (int i = n - 1; i >= 1; i--) {
		cout << alis[i];

		if (i != 1) cout << "\n";
	}

	return 0;
}