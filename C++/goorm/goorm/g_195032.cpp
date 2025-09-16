#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<char> alis(n);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	int dalgoo = 0, fonix = 0;

	for (char spell : alis) {

		if (spell == 'D') {

			dalgoo++;

		}
		else {

			fonix++;

		}

		int diff = dalgoo - fonix;

		if (diff == 2 || diff == -2) {

			break;

		}
	}

	cout << dalgoo << ":" << fonix;

	return 0;
}