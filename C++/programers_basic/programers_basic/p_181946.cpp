#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

#include <string>



int main() {
	
	freopen("input.txt", "r", stdin);
	
	string str1, str2;

	cin >> str1 >> str2;

	cout << str1 + str2 << endl;

	return 0;
}