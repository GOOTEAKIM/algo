#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string word;

	cin >> word;

	int len = word.length();

	int n;

	cin >> n;

	int ans = 0;

	while (n--) {

		string now;

		cin >> now;

		now += now;

		if (now.find(word) != string::npos) ans++;

	}

	cout << ans;

	return 0;
}