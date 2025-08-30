#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<char> alis = { 'a', 'e', 'i', 'o','u', 'A', 'E', 'I', 'O', 'U' };

int main() {

	int n;

	cin >> n;
	cin.ignore();

	while (n--) {

		string sentence;

		getline(cin, sentence);

		string ans = "";

		for (auto spell : sentence) {

			if (find(alis.begin(), alis.end(), spell) != alis.end()) {
				ans += spell;
			}

		}

		if (ans == "") ans = "???";

		cout << ans << "\n";

	}

	return 0;
}