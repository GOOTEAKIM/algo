#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    vector<int> alis(n);

    for (int i = 0; i < n; i++) cin >> alis[i];

    for (int i = 1; i < m; i++) {

        for (int j = 0; j < n; j++) {

            int x;

            cin >> x;

            if (x != alis[j]) {

                cout << "NO";
                return 0;

            }
        }
    }

    cout << "YES";

    return 0;
}
