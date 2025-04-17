#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int n;

int arr[101][101];

int main() {

	cin >> n;

	char k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> k;

			if (k == '.') arr[i][j] = 1;
			else arr[i][j] = 0;
		}
	}

	int garo = 0, sero = 0;

	for (int i = 0; i < n; i++) {

		int can_garo =0;

		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) can_garo++;
			else can_garo = 0;

			if (can_garo == 2) {
				garo++;
			}
		}

	}

	for (int i = 0; i < n; i++) {

		int can_sero = 0;

		for (int j = 0; j < n; j++) {

			if (arr[j][i] == 1) can_sero++;
			else can_sero = 0;

			if (can_sero == 2) {
				sero++;
			}

		}
	}

	cout << garo << " " << sero;

	return 0;
}