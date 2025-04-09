#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int alis[1001][1001];

int main() {

	int n, m;
	
	cin >> n >> m;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> alis[i][j];
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			alis[i][j] += max(alis[i][j - 1], alis[i - 1][j]);
		}
	}

	cout << alis[n][m];

}
