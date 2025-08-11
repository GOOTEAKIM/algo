#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

vector<vector<int>> alis;

vector<bool> visited;

int bfs(int start) {

    queue<int> q;

    visited[start] = true;

    q.push(start);

    int cnt = 1;  // 본인 포함

    while (!q.empty()) {

        int now = q.front();
        q.pop();

        for (int next : alis[now]) {

            if (!visited[next]) {

                visited[next] = true;

                cnt++;

                q.push(next);
            }
        }
    }
    return cnt;
}

int main() {

    cin >> n;

    cin >> m;

    alis.resize(n + 1);

    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++) {

        int start, finish;

        cin >> start >> finish;

        // 양방향 탐색
        alis[start].push_back(finish);
        alis[finish].push_back(start);

    }

    int ans = bfs(1);
    cout << ans;

    return 0;
}

/*

1  3
2  3 4
3  1 2 4
4  2 3 5
5  4

*/

/*
[
    [],
    [3],
    [3,4],
    [1,2,4],
    [2,3,5],
    [4]
]
*/