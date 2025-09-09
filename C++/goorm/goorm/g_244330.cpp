#include <iostream>
#include <vector>

using namespace std;

int main() {

	int t;

	cin >> t;

	int ans = 0;

	for (int i = 0; i < t; i++) {

		int garo, sero;

		cin >> garo >> sero;

		int area = garo * sero;

		if (area > ans) {
			ans = area;
		}

	}

	cout << ans;

	return 0;
}