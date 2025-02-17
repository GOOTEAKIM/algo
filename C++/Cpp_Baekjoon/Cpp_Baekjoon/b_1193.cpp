#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int x;

	cin >> x;

	int line = 1;

	while (x- line > 0) {

		x -= line;
		line++;
	}

	if (line % 2 == 1) {
		cout << line + 1 - x << '/' << x;
	}
	else
	{
		cout << x << '/' << line + 1 - x;
	}

	return 0;
}


