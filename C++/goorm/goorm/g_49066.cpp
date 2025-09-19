#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<char, char> dict = {
	{'b', 'd'},
	{'d', 'b'},
	{'i', 'i'},
	{'l', 'l'},
	{'m', 'm'},
	{'n', 'n'},
	{'o', 'o'},
	{'p', 'q'},
	{'q', 'p'},
	{'s', 'z'},
	{'z', 's'},
	{'n', 'n'},
	{'u', 'u'},
	{'v', 'v'},
	{'w', 'w'},
	{'x', 'x'},

};

int main() {


	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		string word;

		cin >> word;

		int len = word.length();

		bool is_mirror = true;

		for (int i = 0; i <= len / 2; i++) {

			char left = word[i];
			char right = word[len - i - 1];

			if (dict[left] != right) {

				is_mirror = false;
				break;

			}

		}

		if (!is_mirror) cout << "Normal";

		else cout << "Mirror";

		if (i != n - 1) cout << "\n";

	}

	return 0;
}