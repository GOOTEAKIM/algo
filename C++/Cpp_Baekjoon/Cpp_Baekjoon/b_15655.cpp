#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> alis;

vector<int> ans;

int n, m;

void dfs(int now, int start) {

	if (now == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}

	else
	{
		for (int i = start; i < n; i++) {

			ans[now] = alis[i];

			dfs(now + 1, i + 1);
		}
	}

}

int main() {

	cin >> n >> m;

	alis.resize(n);

	ans.resize(m);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis.begin(), alis.end());

	dfs(0, 0);

	return 0;
}