#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;
	int j = 1;
	for (int i = 0; i < n; i++) {

		int a;

		cin >> a;
		
		j += (a - 1);
	}

	cout << j << endl;

	return 0;
}