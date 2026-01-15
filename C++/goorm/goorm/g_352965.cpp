#include <iostream>

using namespace std;

int main() {

	long long k;

	cin >> k;

	k -= 1;

	k %= 5;

	if (k == 0) cout << "g";
	else if (k == 1) cout << "o";
	else if (k == 2) cout << "o";
	else if (k == 3) cout << "r";
	else if (k == 4) cout << "m";

	return 0;
}