#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int reverseInt(int num);

int main() {

	int x, y;

	cin >> x >> y;

	int midans = reverseInt(x) + reverseInt(y);

	int finalans = reverseInt(midans);

	cout << finalans << endl;

	return 0;
}

int reverseInt(int num) {

	string str = to_string(num);

	reverse(str.begin(), str.end());

	return stoi(str);
}
