#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> adj[1001];

bool visited_dfs[1001];
bool visited_bfs[1001];

void dfs(int node) {

	visited_dfs[node] = true;

	cout << node << " ";

	for (int i = 0; i < adj[node].size(); i++) {
		
		int next = adj[node][i];

		if (!visited_dfs[next]) {
			dfs(next);
		}
	}

}


// adj
//
//1		2 3
//2		1
//3		1 4 5
//4		3 5
//5		3 4


//

//1		2 3 4
//2		1 4
//3		1 4
//4		1 2 3

void bfs(int start) {

	queue<int> q;

	visited_bfs[start] = true;

	q.push(start);

	while (!q.empty()) {

		int node = q.front();
		q.pop();
		cout << node << " ";

		for (int i = 0; i < adj[node].size(); i++) {
			
			int next = adj[node][i];

			if (!visited_bfs[next]) {
				visited_bfs[next] = true;

				q.push(next);
			}
		}

	}

}

int main() {

	int n, m, v;

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {

		int a, b;

		cin >> a >> b;

		adj[a].push_back(b);
		adj[b].push_back(a);

	}

	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	dfs(v);

	cout << "\n";

	bfs(v);

	return 0;
}