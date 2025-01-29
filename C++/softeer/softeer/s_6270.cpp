#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> road(n);
    vector<pair<int,int>> tester(m);

    for (int i = 0; i < n; i++) {
        cin >> road[i].first >> road[i].second;
    }

    for (int j = 0; j < m; j++) {
        cin >> tester[j].first >> tester[j].second;
    }

    int idx = 0, tester_idx = 0, speed = 0;

    while (idx < n && tester_idx < m) {
        int move = min(road[idx].first, tester[tester_idx].first);

        speed = max(speed, tester[tester_idx].second - road[idx].second);

        road[idx].first -= move;
        tester[tester_idx].first -= move;

        if (road[idx].first == 0) {
            idx++;
        }

        if (tester[tester_idx].first == 0) {
            tester_idx++;
        }
    }

    cout << speed << endl;
    return 0;
}
