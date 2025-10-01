#include <iostream>
#include <string>

using namespace std;

int toInt(string s) {

	int num = 0;

	for (auto spell : s) {

		num = num * 10 + spell - '0';

	}

	return num;
}

int main() {

	string a, b;

	cin >> a >> b;

	string word = a + b;

	cout << word << "\n";

	int ans = toInt(a) + toInt(b);

	cout << ans;

	return 0;
}