#include <iostream>

using namespace std;

int main() {

	int goorm = 0, worker = 0;

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int num;

		cin >> num;

		if (num % 2 == 0) {
			worker++;
		}
		else {
			goorm++;
		}
	}

	if (goorm > worker) {
		cout << goorm;
	}
	else if (goorm < worker) {
		cout << worker;
	}
	else {
		cout << "tie";
	}


	return 0;
}