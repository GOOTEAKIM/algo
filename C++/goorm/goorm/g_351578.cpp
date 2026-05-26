#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int a, g, p;

	cin >> a >> g >> p;

	cout << 3 * min(a, min(g, p));

	return 0;
}