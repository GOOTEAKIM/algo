#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

	string order;

	getline(cin, order);

	int cnt = 0;

	stringstream ss(order);

	string word;

	while (ss >> word) {

		cnt++;

	}

	cout << cnt;

	return 0;
}