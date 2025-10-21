#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int r, c;

vector<string> alis;

vector<vector<bool>> visited;

int sheeps = 0, wolves = 0;

int dx[] = { 1,-1, 0,0 };
int dy[] = { 0,0,1,-1 };

void bfs(int y, int x) {

	int she = 0, wol = 0;

	if (alis[y][x] == 'v') wol++;
	else if (alis[y][x] == 'o') she++;

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

			if (ny >= 0 && ny < r && nx >= 0 && nx < c && !visited[ny][nx]) {
				
				int next = alis[ny][nx];

				if (next == '#') continue;

				q.push({ ny,nx });
				visited[ny][nx] = true;

				if (next == 'v') wol++;

				else if (next == 'o') she++;

			}
		}
	}

	if (she > wol) sheeps += she;
	
	else wolves += wol;

}

int main() {

	cin >> r >> c;

	alis.resize(r);

	visited.assign(r, vector<bool>(c, false));

	for (int i = 0; i < r; i++) {
		
		string word;

		cin >> word;

		alis[i] = word;
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (alis[i][j] == 'v' || alis[i][j] == 'o') {
				if(!visited[i][j]) bfs(i, j);
			}
		}
	}

	cout << sheeps << " " << wolves;

	return 0;
}