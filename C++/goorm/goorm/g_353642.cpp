#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

	unordered_map<char, char> dict{ {'0','0'}, {'1','1'}, {'6','9'}, {'8','8'}, {'9','6'} };

	string number;

	cin >> number;

	string ans = "";

	int len = number.length() - 1;

	for (int i = len; i >= 0; i--) {

		char now = number[i];

		char next = dict[now];

		ans += next;
	}

	cout << ans;

	return 0;
}