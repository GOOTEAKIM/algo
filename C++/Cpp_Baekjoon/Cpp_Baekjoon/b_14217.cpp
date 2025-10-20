#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m, q;

vector<vector<int>> alis;

vector<vector<int>> ans;

void bfs(int k) {

	vector<int> dist(n + 1, -1);

	queue<int> q;

	q.push(1);

	dist[1] = 0;

	while (!q.empty()) {
		int now = q.front(); q.pop();
		for (int next : alis[now]) {
			if (dist[next] == -1) {
				dist[next] = dist[now] + 1;
				q.push(next);
			}
		}
	}

	for (int i = 1; i <= n; i++) ans[k][i] = dist[i];

}

int main() {

	iostream::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	alis.resize(n + 1);

	for (int i = 0; i < m; i++) {
		int start, finish;

		cin >> start >> finish;

		alis[start].push_back(finish);
		alis[finish].push_back(start);

	}

	cin >> q;

	ans.assign(q+1, vector<int>(n + 1, 0));

	for (int k = 0; k < q; k++) {

		int a, i, j;

		cin >> a >> i >> j;

		if (a == 1) {
			alis[i].push_back(j);
			alis[j].push_back(i);
		}
		else
		{
			alis[i].erase(find(alis[i].begin(),alis[i].end(), j));
			alis[j].erase(find(alis[j].begin(),alis[j].end(), i));
		}

		bfs(k);
	}

	for (int i = 0; i <	q; i++) {
		for (int j = 1; j <= n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}

//1 2 3
//2 1 4 5
//3 1 5
//4 2 5
//5 2 3 4
//
//1 3
//2 4 5
//3 1 5
//4 2 5
//5 2 3 4
//
//0 3 1 3 2