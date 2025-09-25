#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<char> alis;

	string word;

	cin >> word;

	for (char spell : word) {

		if (alis.empty()) {

			alis.push_back(spell);

		}
		else {

			char now = alis.back();

			if (now == '(') {

				if (spell == '(') {

					alis.push_back(spell);

				}
				else {

					alis.pop_back();
				}
			}
		}

	}

	if (alis.empty()) cout << "YES";
	else cout << "NO";

	return 0;
}