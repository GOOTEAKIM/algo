#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> alis(n);

    for (int i = 0; i < n; i++) cin >> alis[i];

    long long total = 0;

    for (int i = 0; i < n; i += 3) {

        if (i + 2 < n) {

            int a = alis[i];
            int b = alis[i + 1];
            int c = alis[i + 2];

            int mx = max(a, max(b, c));

            total += (a + b + c - mx);
        }
        else {

            for (int j = i; j < n; j++) total += alis[j];
        }
    }

    cout << total;

    return 0;
}