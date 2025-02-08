#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<int>> graph; // ���� ����Ʈ
    unordered_set<int> all_nodes; // ��� ��� ����

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        all_nodes.insert(a);
        all_nodes.insert(b);
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    unordered_set<int> used;

    // �� ����� ���� ������ �켱���� ť�� ����
    for (auto& entry : graph) {
        pq.push({ entry.second.size(), entry.first });
    }

    int ans = 0;

    // �ּ� ���� �������� ����
    while (!pq.empty()) {
        int node = pq.top().second;
        pq.pop();

        // �̹� ���õǾ��ų� ����� �� ���� ���ڸ� ��ŵ
        if (used.count(node)) continue;

        // ���õ� ���� �߰�
        used.insert(node);
        ans++;

        // �� ���ڿ� ����� ���ڵ鵵 ��� �Ұ��� ó��
        for (int neighbor : graph[node]) {
            used.insert(neighbor);
        }
    }

    // �������� ���� ���� ���
    cout << ans << endl;
    return 0;
}

/*

6 4
1 2
2 3
3 4
4 5


7 6
1 2
2 3
1 3
4 5
5 6
6 7

*/