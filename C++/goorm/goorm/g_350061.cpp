#include <iostream>
#include <set>

using namespace std;

int main() {

	set<char> dict;

	int n;

	cin >> n;

	string word;

	cin >> word;

	for (char next : word) dict.insert(next);

	cout << dict.size();

	return 0;
}