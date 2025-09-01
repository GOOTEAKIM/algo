#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	cin.ignore();

	vector<string> alis(n);

	for (int i = 0; i < n; i++) {

		string sentence;

		getline(cin, sentence);

		alis[i] = sentence;
	}

	sort(alis.begin(), alis.end());

	cout << alis[k - 1];

	return 0;
}