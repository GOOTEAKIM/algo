#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int alis[10];
int ans[10];

void dfs(int level, int start) {

	if (level == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	else
	{
		int prev = 0;

		for (int i = start; i < n; i++) {

			if (prev == alis[i]) continue;

			prev = alis[i];

			ans[level] = alis[i];

			dfs(level + 1, i);

		}
	}

}

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis, alis + n);

	dfs(0, 0);

	return 0;
}