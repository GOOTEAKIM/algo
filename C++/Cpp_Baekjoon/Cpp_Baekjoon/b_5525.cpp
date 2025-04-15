#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	int m;

	cin >> m;

	string pn;

	cin >> pn;

	int cnt = 0;

	for (int i = 0; i < m; i++) {

		int len = 0;

		if (pn[i] == 'O') {
			continue;
		}
		else
		{
			while (pn[i + 1] == 'O' && pn[i + 2] == 'I') {

				len++;

				if (len == n) {
					cnt++;
					len--;
				}

				i += 2;
			}
		}
		len = 0;
	}

	cout << cnt;

	return 0;
}