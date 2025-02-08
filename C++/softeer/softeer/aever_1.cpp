#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<int>> graph; // 인접 리스트
    unordered_set<int> all_nodes; // 모든 노드 저장

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

    // 각 노드의 연결 개수를 우선순위 큐에 저장
    for (auto& entry : graph) {
        pq.push({ entry.second.size(), entry.first });
    }

    int ans = 0;

    // 최소 연결 개수부터 선택
    while (!pq.empty()) {
        int node = pq.top().second;
        pq.pop();

        // 이미 선택되었거나 사용할 수 없는 숫자면 스킵
        if (used.count(node)) continue;

        // 선택된 숫자 추가
        used.insert(node);
        ans++;

        // 이 숫자와 연결된 숫자들도 사용 불가능 처리
        for (int neighbor : graph[node]) {
            used.insert(neighbor);
        }
    }

    // 독립적인 숫자 개수 출력
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