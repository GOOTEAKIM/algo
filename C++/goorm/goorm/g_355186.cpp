#include <iostream>
#include <numeric>

using namespace std;

int main() {

    long long r, c, h;

    cin >> r >> c >> h;

    long long a = (r + c) * (r + c) + h * h;
    long long b = (r + h) * (r + h) + c * c;
    long long d = (c + h) * (c + h) + r * r;

    cout << min({ a, b, d });

    return 0;
}