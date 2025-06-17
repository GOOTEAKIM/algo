#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

	int n;

	cin >> n;

	string word;

	cin >> word;

	for (auto& spell : word) {

		if (islower(spell)) {
			spell = toupper(spell);
		}
		else if (isupper(spell)) {
			spell = tolower(spell);
		}

	}

	cout << word;

	return 0;
}