#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int alis[10];

int ans[10];

int n, m;

void dfs(int start) {

	if (start == m) {

		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}

		cout << "\n";
	}
	else
	{
		for (int i = 0; i < n; i++) {
			ans[start] = alis[i];

			dfs(start + 1);
		}
	}

}

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis, alis + n);

	dfs(0);

	return 0;
}