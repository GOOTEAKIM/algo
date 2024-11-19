#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	int n;
	
	cin >> str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << str;
		//str += str;
	}


	return 0;
}