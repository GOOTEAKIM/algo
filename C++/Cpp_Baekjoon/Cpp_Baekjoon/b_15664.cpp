#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int alis[10];
int ans[10];

int n, m;

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
			
			ans[level] = alis[i];

			prev = alis[i];

			dfs(level + 1, i + 1);
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


