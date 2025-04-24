#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	unordered_map<string, string> dict;

	while (n--) {

		string address, password;

		cin >> address >> password;

		dict[address] = password;

	}

	while (m--) {
		string word;

		cin >> word;

		cout << dict[word] << "\n";
	}

	return 0;
}