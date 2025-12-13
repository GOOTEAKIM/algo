#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	vector<bool> visited(m + 1, false);

	vector<int> alis;

	for (int i = 0; i < m; i++) {

		int num;

		cin >> num;

		if (!visited[num]) {

			visited[num] = true;

			alis.push_back(num);

		}

	}

	sort(alis.begin(), alis.end());

	for (int i = 0; i < alis.size(); i++) {

		cout << alis[i];

		if (i != alis.size() - 1) cout << " ";

	}

	return 0;
}