#include <iostream>
using namespace std;

const long long MOD = 1000000007;

int main() {

    long long n;

    cin >> n;

    long long ans = 0;

    ans = ((n % MOD) * ((n + 1) % MOD)) / 2;

    ans %= MOD;

    ans = (ans * ans) % MOD;

    cout << ans;

    return 0;
}