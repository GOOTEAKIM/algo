#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	int h, m;

	cin >> h >> m;

	int total = h * 60 + m;

	while (n--) {
		int minute;

		cin >> minute;

		total += minute;
	}

	int hour = (total / 60) % 24;
	int minutes = total % 60;

	cout << hour << " " << minutes;

	return 0;
}