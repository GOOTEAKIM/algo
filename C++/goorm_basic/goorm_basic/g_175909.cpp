#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	vector<bool> visited(n + 1, false);

	visited[0] = true;

	vector<int> arr(m);

	int ans = -1;

	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}

	int cnt = 0;

	for (int i = 0; i < m; i++) {

		int now = arr[i];

		if (!visited[now]) {
			visited[now] = true;
			cnt++;
		}

		if (cnt == n) {

			ans = i + 1;

			break;
		}
	}

	cout << ans;

	return 0;
}