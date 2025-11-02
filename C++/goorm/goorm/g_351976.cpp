#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b;

    cin >> a >> b;

    double pi = acos(-1);

    double ans = 2 * a + pi * b;

    cout << floor(ans);
}