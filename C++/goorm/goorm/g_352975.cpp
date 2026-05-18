#include <iostream>

using namespace std;

int main() {

    long long a, b, c;

    cin >> a >> b >> c;

    if (a == -1) cout << c * c - b * b;

    else if (b == -1) cout << c * c - a * a;

    else cout << a * a + b * b;

    return 0;
}