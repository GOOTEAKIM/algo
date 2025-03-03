#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n,k, root, leaf = 0;

vector<int> tree[51];

int dfs(int node) {

	if (node == k) return -1;

	// 자식이 없는 경우
	if (!tree[node].size()) {
		leaf++;
		return 0;
	}

	for (int i = 0; i < tree[node].size(); i++) {
		int tmp = dfs(tree[node][i]);

		// tmp == -1 : 자식이 삭제된 경우
		if (tmp == -1 && tree[node].size() == 1) {
			leaf++;
		}
	}

	return 0;
}

void solve() {
	dfs(root);
	cout << leaf;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		int t1;

		cin >> t1;

		if (t1 == -1) {
			root = i;
		}
		else
		{
			tree[t1].push_back(i);
		}
	}

	cin >> k;

	solve();

	return 0;
}

