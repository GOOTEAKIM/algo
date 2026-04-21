#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

	int n;

	cin >> n;

	string e;

	cin >> e;

	unordered_map <string, int> dict;

	for (int i = 0; i < n; i++) {

		string p;

		int c;

		cin >> p >> c;

		if (dict[p] > c) dict[p] = c;

		else if (!dict[p]) dict[p] = c;

	}

	if (!dict[e]) cout << -1;

	else cout << dict[e];

	return 0;
}