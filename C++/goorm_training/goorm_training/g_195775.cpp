#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <numeric>

using namespace std;

int n, m, k;

vector<vector<int>> alis;

vector<int> visited;

void bfs(int x) {

    queue<pair<int, int>> q;

    visited[x] = 0; // ������ �Ÿ� 0

    q.push({ x, 0 });

    while (!q.empty()) {

        int now = q.front().first;

        int bridges = q.front().second;

        q.pop();

        for (int next : alis[now]) {

            if (visited[next] == -1) { // �湮 �� �� ���

                visited[next] = bridges + 1;

                q.push({ next, visited[next] });
            }
        }
    }
}

int main() {

    cin >> n >> m >> k;

    alis.resize(n + 1);

    visited.assign(n + 1, -1);

    for (int i = 0; i < m; i++) {

        int start, finish;

        cin >> start >> finish;

        alis[start].push_back(finish);

    }

    bfs(k);

    int cost = 0;

    int idx = -1; // �̰� �߿�

    for (int i = 1; i <= n; i++) {

        if (i == k) continue;

        if (visited[i] != -1) { // ���� ������ ��츸

            int total = visited[i] + abs(k - i);

            if (total > cost || (total == cost && i > idx)) {

                cost = total;

                idx = i;

            }
        }
    }

    cout << idx;

    return 0;
}
