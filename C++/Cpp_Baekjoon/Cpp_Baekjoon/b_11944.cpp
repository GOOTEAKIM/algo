#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	string answer="";

	for (int i = 0; i < n; i++) {
		answer += to_string(n);
	}
	cout << answer.substr(0,m) << endl;

	return 0;
}