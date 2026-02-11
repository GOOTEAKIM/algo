#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string now;

	cin >> now;

	string next = now;

	reverse(next.begin(), next.end());

	if (now == next) cout << 1;

	else cout << 0;

	return 0;
}