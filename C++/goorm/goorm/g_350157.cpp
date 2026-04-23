#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    string road;

    cin >> road;

    int ans = 0;

    for (int i = 1; i < n - 1; i++) {

        if (road[i] == '.' && road[i - 1] == '#' && road[i + 1] == '#') ans++;

    }

    cout << ans;

    return 0;
}