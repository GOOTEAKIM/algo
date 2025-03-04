#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string word;

	cin >> word;

	int q;

	cin >> q;

	int len = word.length();

	vector<vector<int>> freq(len + 1, vector<int>(26, 0));


	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			freq[i + 1][j] = freq[i][j];
		}

		freq[i + 1][word[i] - 'a']++;
	}

	while (q--) {

		char spell;

		int l, r;

		cin >> spell >> l >> r;

		int cnt = spell - 'a';

		int result = freq[r + 1][cnt] - freq[l][cnt];

		cout << result << "\n";
	}



	return 0;
}

