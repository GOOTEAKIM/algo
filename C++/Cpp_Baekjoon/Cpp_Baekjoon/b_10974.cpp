#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

bool visited[9];

int alis[9];

void dfs(int depth) {

	if (depth == n) {

		for (int i = 0; i < n; i++) {

			cout << alis[i] << " ";

		}

		cout << "\n";

		return;
	}

	for (int i = 1; i <= n; i++) {

		if (!visited[i]) {

			visited[i] = true;
			
			alis[depth] = i;

			dfs(depth + 1);

			visited[i] = false;
		}

	}

}

int main() {

	cin >> n;

	dfs(0);

	return 0;
}