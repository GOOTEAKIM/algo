#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int r, c, q;

	cin >> r >> c >> q;

	vector<vector<int>> alis(r+1, vector<int>(c+1,0)); 
	
	vector<vector<int>> prefix(r+1, vector<int>(c+1,0)); 

	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> alis[i][j];

			prefix[i][j] = alis[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];

		}
	}

	while (q--) {

		int r1, c1, r2, c2;

		cin >> r1 >> c1 >> r2 >> c2;

		long long sum = prefix[r2][c2] + prefix[r1 - 1][c1 - 1] - prefix[r1 - 1][c2] - prefix[r2][c1 - 1];

		long long div = (r2 - r1 + 1) * (c2 - c1 + 1);

		cout << sum / div << "\n";

	}

	return 0;
}

