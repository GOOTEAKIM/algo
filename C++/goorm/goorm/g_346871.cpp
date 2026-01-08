#include <iostream>

using namespace std;

int main() {

	string word;

	int n;

	cin >> word >> n;

	int len = word.length();

	if (n == 1) {

		cout << word[len - 2];

	}
	else if (n == len) {

		cout << word[1];

	}
	else {

		cout << word[len - n - 1] << word[len - n + 1];

	}

	return 0;
}