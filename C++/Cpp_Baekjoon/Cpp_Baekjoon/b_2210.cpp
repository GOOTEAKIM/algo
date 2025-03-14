#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

vector<vector<int>> alis(5, vector<int>(5));

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

set<int> ans;

void dfs(int x, int y, int current, int depth) {

	if (depth == 6) {
		ans.insert(current);
		return;
	}
	else
	{

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
				dfs(nx, ny, current * 10 + alis[nx][ny], depth+1);
			}
		}

	}
}

int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> alis[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			dfs(i, j, alis[i][j],1);

		}
	}
	
	cout << ans.size();

	return 0;
}