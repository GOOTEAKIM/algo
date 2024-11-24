#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	
	int n;

	cin >> n;

	if (n % 2 == 0) {
		cout << n << " is even" << endl;
	}
	else
	{
		cout << n << " is odd" << endl;
	}

	return 0;
}