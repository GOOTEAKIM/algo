#include <iostream>

using namespace std;

int main() {

	int g, b;

	cin >> g >> b;

	if (g > b) cout << "Goorm";
	else if (g < b) cout << "Baram";
	else cout << "Tie";

	return 0;
}