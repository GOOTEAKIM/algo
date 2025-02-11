#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main() {

	int t;

	cin >> t;

	while (t--) {

		string word;

		cin >> word;

		list<char> ans;

		auto cursor = ans.begin();

		for (char spell : word) {

			if (spell == '<') {
				if (cursor != ans.begin()) {
					cursor--;
				}
			}
			else if (spell == '>') {
				if (cursor != ans.end()) {
					cursor++;
				}
			}
			else if (spell == '-') {
				if (cursor != ans.begin()) {
					cursor--;
					cursor = ans.erase(cursor);
				}
			}
			else
			{
				ans.insert(cursor, spell);
			}

		}

		for (char spell : ans) {
			cout << spell;
		}
		cout << "\n";
	}

	return 0;
}