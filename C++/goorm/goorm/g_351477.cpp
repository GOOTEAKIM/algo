#include <iostream>
#include <vector>

// 누적합

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<long long> cnt(m, 0);

    long long sum = 0, ans = 0;

    cnt[0] = 1; // 누적합 자체가 M으로 나누어떨어지는 경우

    for (int i = 0; i < n; i++) {

        long long x;

        cin >> x;

        sum = (sum + x) % m;

        ans += cnt[sum];

        cnt[sum]++;
    }

    cout << ans;

    return 0;
}