#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <string>;
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = tolower(str[i]);
		}
		else {
			str[i] = toupper(str[i]);
		}
	}

	cout << str;

	return 0;
}