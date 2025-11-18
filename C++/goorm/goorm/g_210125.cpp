#include <iostream>
#include <vector>

using namespace std;

int n, k;

// µ¿ ¼­ ³² ºÏ

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

vector<vector<int>> alis;

int main() {

	cin >> n >> k;

	int y = 0, x = 0;

	string order;

	cin >> order;

	alis.assign(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			int num = 0;

			cin >> num;

			alis[i][j] = num;

			if (num == 1) {
				y = i, x = j;
			}

		}
	}

	int cnt = 0;

	for (auto spell : order) {

		if (spell == 'R') {

			int n_y = y;

			int n_x = x + 1;

			if (n_x >= n || alis[n_y][n_x] == 3) continue;

			else {
				x++;
				cnt++;
			}

		}
		else if (spell == 'L') {

			int n_y = y;
			int n_x = x - 1;

			if (n_x < 0 || alis[n_y][n_x] == 3) continue;

			else {
				x--;
				cnt++;
			}

		}
		else if (spell == 'D') {

			int n_y = y + 1;
			int n_x = x;

			if (n_y >= n || alis[n_y][n_x] == 3) continue;

			else {
				y++;
				cnt++;
			}

		}
		else if (spell == 'U') {

			int n_y = y - 1;
			int n_x = x;

			if (n_y < 0 || alis[n_y][n_x] == 3) continue;

			else {
				y--;
				cnt++;
			}

		}

		if (alis[y][x] == 2) {
			cout << "SUCCESS " << cnt;
			return 0;
		}
	}

	if (alis[y][x] == 2) {
		cout << "SUCCESS " << cnt;
	}
	else {
		cout << "FAIL";
	}

	return 0;
}