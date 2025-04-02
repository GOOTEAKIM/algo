#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;

int ans = 0;

vector<string> alis;

vector<vector<bool>> visited;

int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
				if (!visited[ny][nx] && alis[ny][nx] != 'X') {
					
					if (alis[ny][nx] == 'P') ans++;

					q.push({ ny,nx });

					visited[ny][nx] = true;

				}
			}

		}

	}

}

int main() {

	cin >> n >> m;

	alis.resize(n);

	visited.assign(n, vector<bool>(m, false));

	int y = 0, x = 0;

	for (int i = 0; i < n; i++) {
		
		string word = "";

		for (int j = 0; j < m; j++) {
			char spell;

			cin >> spell;

			if (spell == 'I') {
				y = i, x = j;
			}

			word += spell;
		}
		alis[i] = word;
	}

	bfs(y, x);

	if (ans == 0) cout << "TT"; 

	else cout << ans;

	return 0;
}