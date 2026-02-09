#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	string num;

	cin >> num;

	sort(num.rbegin(), num.rend());

	cout << num;

	return 0;
}