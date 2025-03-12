#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

vector<int> alis; // ���� ����

vector<int> arr; // �� ����� ����

vector<bool> visited;

void dfs(int depth) {

	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	else
	{
		for (int i = 0; i < n; i++) {
			if (!visited[i]) {
				visited[i] = true;

				arr[depth] = alis[i];

				dfs(depth + 1);

				visited[i] = false;

			}
		}
	}
}

int main() {
	
	cin >> n >> m;

	alis.resize(n);

	arr.resize(m);

	visited.assign(n, false);

	for (int i = 0; i < n; i++) {
		cin >> alis[i];
	}

	sort(alis.begin(), alis.end()); // �������� ����

	dfs(0);

	return 0;
}