#pragma warning(disable:4996)
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<vector<int>> alis;
vector<vector<bool>> visited;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({ x, y });
    visited[x][y] = true;

    while (!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();

        int x = now.first;
        int y = now.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && alis[nx][ny] == 1) {
                    visited[nx][ny] = true;
                    alis[nx][ny] = alis[x][y] + 1;  
                    q.push({ nx, ny });
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    alis.resize(n, vector<int>(m));
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &alis[i][j]);  // 공백 없이 입력 받기
        }
    }

    bfs(0, 0);

    cout << alis[n - 1][m - 1] << endl;  

    return 0;
}