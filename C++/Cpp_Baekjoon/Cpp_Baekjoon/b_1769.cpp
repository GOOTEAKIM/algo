#include <iostream>
#include <string>

using namespace std;

int main() {

    string n;

    cin >> n;

    int ans = 0;

    while (n.size() > 1) {

        int sum = 0;

        for (auto next : n) {
            sum += next - '0';
        }

        n = to_string(sum);
        
        ans++;

    }

    cout << ans << "\n";

    if ((n[0] - '0') % 3 == 0) cout << "YES";

    else cout << "NO";

    return 0;
}