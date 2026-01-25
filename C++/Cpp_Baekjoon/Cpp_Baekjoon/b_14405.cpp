#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    for (int i = 0; i < s.size();) {

        if (s.substr(i, 2) == "pi") {
            i += 2;
        }
        else if (s.substr(i, 2) == "ka") {
            i += 2;
        }
        else if (s.substr(i, 3) == "chu") {
            i += 3;
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
