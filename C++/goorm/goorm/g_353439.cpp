#include <iostream>
#include <string>

using namespace std;

int main() {

    string a, b, c, d;
    cin >> a >> b >> c >> d;

    long long front = stoll(a + b);
    long long back = stoll(c + d);

    cout << front + back;

    return 0;
}