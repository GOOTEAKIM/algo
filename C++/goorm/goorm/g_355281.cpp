#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	unordered_map <string, int> dict;

	for (int i = 0; i < n; i++) {

		string now;

		cin >> now;

		dict[now] = 1;

	}

	int ans = 0;

	for (int i = 0; i < m; i++) {

		string now;

		cin >> now;

		if (dict[now]) ans++;

	}

	cout << ans;

	return 0;
}