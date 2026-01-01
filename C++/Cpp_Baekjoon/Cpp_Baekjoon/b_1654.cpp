#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    vector<long long> alis(n);

    for (int i = 0; i < n; i++) cin >> alis[i];
    
    long long start = 1;

    long long finish = *max_element(alis.begin(), alis.end());

    long long ans = 0;

    while (start <= finish) {

        long long cnt = 0;

        long long mid = (start + finish) / 2;

        for (auto next : alis) cnt += next / mid;
        
        if (cnt >= k) {
            ans = mid;
            start = mid + 1;
        }
        else {
            finish = mid - 1;
        }
    }

    cout << ans;
    return 0;
}