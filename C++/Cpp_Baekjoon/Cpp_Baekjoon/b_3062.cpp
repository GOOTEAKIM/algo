#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int revInt(int num);

int main() {

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int num;
		cin >> num;

		num += revInt(num);

		if (num == revInt(num)) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

	}


	return 0;
}

int revInt(int num) {

	string str = to_string(num);

	reverse(str.begin(), str.end());

	return stoi(str);

}