#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	string word;

	cin >> word;

	int idx = word.find('*');

	string pre = word.substr(0, idx);
	string bwd = word.substr(idx+1);

	while (n--) {

		string now;

		cin >> now;

		if (now.size() < pre.size() + bwd.size()) {
			cout << "NE\n";
		}
		else if (now.substr(0, pre.size()) == pre &&
			now.substr(now.size() - bwd.size()) == bwd) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}

	}

	return 0;
}