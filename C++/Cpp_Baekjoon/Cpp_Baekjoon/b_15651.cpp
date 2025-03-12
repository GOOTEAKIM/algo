#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int arr[8];

void dfs(int now) {

	if (now == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	else
	{
		for (int i = 1; i <= n; i++) {

			arr[now] = i;
			
			dfs(now + 1);

		}
	}

}

int main() {

	cin >> n >> m;

	dfs(0);

	return 0;
}