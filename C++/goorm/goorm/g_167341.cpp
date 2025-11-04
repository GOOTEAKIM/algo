#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	if (n == 1) {
		cout << "*";
	}
	else if (n == 2) {
		cout << " *" << "\n";
		cout << "**";
	}
	else if (n == 3) {
		cout << "  *" << "\n";
		cout << " **" << "\n";
		cout << "***";
	}
	else if (n == 4) {
		cout << "   *" << "\n";
		cout << "  **" << "\n";
		cout << " ***" << "\n";
		cout << "****" << "\n";
	}
	else if (n == 5) {
		cout << "    *" << "\n";
		cout << "   **" << "\n";
		cout << "  ***" << "\n";
		cout << " ****" << "\n";
		cout << "*****";
	}

	return 0;
}