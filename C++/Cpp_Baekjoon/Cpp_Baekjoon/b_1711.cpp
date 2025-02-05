#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    int cnt = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {

                long long a = (long long)(arr[i].first - arr[j].first) * (arr[i].first - arr[j].first) +
                    (long long)(arr[i].second - arr[j].second) * (arr[i].second - arr[j].second);
                long long b = (long long)(arr[i].first - arr[k].first) * (arr[i].first - arr[k].first) +
                    (long long)(arr[i].second - arr[k].second) * (arr[i].second - arr[k].second);
                long long c = (long long)(arr[j].first - arr[k].first) * (arr[j].first - arr[k].first) +
                    (long long)(arr[j].second - arr[k].second) * (arr[j].second - arr[k].second);

                long long max_val = max({ a, b, c });

                if (max_val == a + b + c - max_val) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}
