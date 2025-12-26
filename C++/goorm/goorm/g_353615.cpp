#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	vector<vector<int>> alis(n, vector<int>(m, 0));

	int cnt = 2;

	while (cnt) {

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int num;
				cin >> num;
				alis[i][j] += num;
			}
		}
		cnt--;
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			cout << alis[i][j];

			if (j != m - 1) cout << " ";
		}

		cout << "\n";
	}

	return 0;
}