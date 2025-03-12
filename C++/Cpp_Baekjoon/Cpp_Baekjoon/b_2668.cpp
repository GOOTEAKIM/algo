#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n;

int alis[101];

bool visited[101];

vector<int> ans;

void dfs(int curr, int start) {

	if (visited[curr]) {

		if (start == curr) ans.push_back(curr);
		return;
	}

	visited[curr] = true;

	dfs(alis[curr], start);

}

int main() {
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> alis[i];
	}

	for (int i = 1; i <= n; i++) {
		memset(visited, 0, sizeof(visited));

		dfs(i, i);
	}

	cout << ans.size() << "\n";

	for (int num : ans) {
		cout << num << "\n";
	}

	return 0;
}
