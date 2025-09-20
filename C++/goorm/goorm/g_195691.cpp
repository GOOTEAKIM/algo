#include <iostream>
#include <vector>

using namespace std;

int dx[] = { 0,1,-1,0,0 };
int dy[] = { 0,0,0,1,-1 };

int n, k;

vector<vector<int>> alis;

int main() {

	cin >> n >> k;

	alis.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			char now;

			cin >> now;

			if (now == '@') {
				alis[i][j] = -2;
			}
			else if (now == '#') {
				alis[i][j] = -1;
			}


			else {
				alis[i][j] = now - '0';
			}
		}
	}

	vector<vector<int>> origin; // ÆøÅº Ç¥½Ã

	origin.assign(n, vector<int>(n, 0));

	for (int i = 0; i < k; i++) {

		int y, x;

		cin >> y >> x;

		y -= 1, x -= 1;

		for (int i = 0; i < 5; i++) {

			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (alis[ny][nx] == -2) {
					origin[ny][nx] += 2;
				}
				else if (alis[ny][nx] == 0) {
					origin[ny][nx] += 1;
				}

			}

		}

	}

	int ans = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			int next = origin[i][j];

			if (next > ans) {
				ans = next;
			}
		}
	}

	cout << ans;

	return 0;
}