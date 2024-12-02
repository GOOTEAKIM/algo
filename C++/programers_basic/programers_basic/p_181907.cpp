#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solutoin(string my_string, int n);

int main() {

	string my_string;
	int n;

	cin >> my_string;
	cin >> n;

	cout << solutoin(my_string, n) << endl;

	return 0;
}

string solutoin(string my_string, int n) {

	string result = my_string.substr(0, n);
	return result;
}