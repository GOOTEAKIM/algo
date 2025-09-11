#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;

	cin >> word;

	char prev = word[0];

	string ans = "";

	int len = word.length();

	int idx = len - 1;

	for (int i = 0; i < word.length() - 1; i++) {

		if (word[i] > word[i + 1]) {
			idx = i;
			break;
		}

	}

	ans += word.substr(0, idx);
	ans += word.substr(idx + 1, len - idx - 1);

	cout << ans;

	return 0;
}

// abcdda
// abcda

// aabb