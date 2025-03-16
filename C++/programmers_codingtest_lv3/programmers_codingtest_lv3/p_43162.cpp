#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool visited[200];

void dfs(int current, int n, vector<vector<int>> computers) {

	visited[current] = true;

	for (int i = 0; i < n; i++) {

		if (!visited[i] && computers[current][i] == 1) {

			dfs(i, n, computers);

		}

	}

}

int solution(int n, vector<vector<int>> computers) {

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (visited[i] == 0) {
			dfs(i, n, computers);

			ans++;
		}
	}

	return ans;
}