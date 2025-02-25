#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	string s, t;

	cin >> s >> t;

	vector<char> ans;

	for (auto spell : s) {

		ans.push_back(spell);
	}

	vector<char> arr;

	for (auto spell : t) {

		arr.push_back(spell);

	}

	while (true) {

		if (arr.back() == 'A') {
			arr.pop_back();
		}
		else
		{
			arr.pop_back();
			reverse(arr.begin(), arr.end());
		}


		if (ans.size() == arr.size()) {
			if (ans == arr) {
				cout << 1;
				break;
			}
			else
			{
				cout << 0;
				break;
			}
		}

	}

	return 0;
}

