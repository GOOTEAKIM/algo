#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<pair<int, int>> alis(n);

    for (int i = 0; i < n; i++) {

        cin >> alis[i].first >> alis[i].second;

    }

    sort(alis.begin(), alis.end());

    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto now : alis) {

        int start = now.first;
        int finish = now.second;

        if (!pq.empty() && pq.top() <= start) {
            pq.pop();
        }

        pq.push(finish);
    }

    cout << pq.size();
}