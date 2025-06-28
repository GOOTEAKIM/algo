#include <iostream>
#include <string>

using namespace std;

int main() {

    int N, M;

    cin >> N >> M;

    string S, E;

    cin >> S >> E;

    while (true) {

        int pos = E.find(S);

        if (pos == string::npos) {
            break;
        }

        E.erase(pos, S.length());
    }

    if (E.empty()) {
        cout << "EMPTY" << "\n";
    }
    else {
        cout << E << "\n";
    }

    return 0;
}
