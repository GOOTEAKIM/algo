#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

struct virus
{
	int num; // 바이러스 값

	int time; // 경과시간

	int x, y;
};

int n, k;

int s, x, y;

vector<vector<int>> alis;

queue<virus> q;

void bfs() {

	while (!q.empty()) {

		virus now = q.front();
		
		q.pop();

		if (now.time == s) return;

		for (int i = 0; i < 4; i++) {

			int nx = now.x + dx[i];
			int ny = now.y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {

				if (alis[nx][ny] == 0) {

					alis[nx][ny] = now.num;
					q.push({ now.num, now.time + 1, nx, ny });

				}

			}

		}

	}

}

int main() {

	cin >> n >> k;

	alis.assign(n, vector<int>(n));

	vector<virus> viruses;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			
			cin >> alis[i][j];

			if (alis[i][j] != 0) {
				viruses.push_back({ alis[i][j], 0, i,j });
			}
		}

	}

	cin >> s >> x >> y;

	x--, y--;
	
	sort(viruses.begin(), viruses.end(),
		[](virus a, virus b) {
			return a.num < b.num;
		});

	for (auto v : viruses) q.push(v);
	
	bfs();

	cout << alis[x][y];

	return 0;

}