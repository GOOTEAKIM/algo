#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, k;

vector<vector<int>> alis;
vector<vector<bool>> visited;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

vector<int> answers;

void bfs(int y, int x) {

	queue<pair<int, int>> q;

	q.push({ y,x });

	visited[y][x] = true;

	int value = alis[y][x];

	int group_size = 1;

	while (!q.empty()) {

		int now_y = q.front().first;
		int now_x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = now_y + dy[i];
			int nx = now_x + dx[i];

			if (ny >= 0 && ny < n && nx >= 0 && nx < n) {

				if (!visited[ny][nx] && alis[ny][nx] == value) { // 방문하지 않고 값이 같다면?

					visited[ny][nx] = true;

					q.push({ ny,nx });

					group_size++;
				}
			}

		}

	}

	if (group_size >= k) {
		answers[value]++;
	}

}


int main() {

	cin >> n >> k;

	alis.resize(n, vector<int>(n));

	visited.assign(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			cin >> alis[i][j];

		}
	}

	answers.assign(31, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (!visited[i][j]) {
				bfs(i, j);
			}

		}
	}

	int idx = -1;
	int max_count = -1;

	for (int i = 0; i < answers.size(); i++) {
		if (answers[i] >= max_count) {
			max_count = answers[i];
			idx = i;
		}
	}

	cout << idx << endl;

	return 0;
}