#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);

	int a, b;

	cin >> a >> b;

	cout << a << " + " << b << " = " << a + b << endl;

	return 0;
}