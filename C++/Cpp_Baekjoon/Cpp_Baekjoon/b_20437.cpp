#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void findSubstring(string& w, int k) {

	vector<int> book;

	for (char spell = 'a'; spell <= 'z'; spell++) {
		vector<int> positions;

		for (int i = 0; i < w.size(); i++) {
			if (w[i] == spell) {
				positions.push_back(i);
			}
		}

		if (positions.size() >= k) {
			for (int i = 0; i <= positions.size() - k; i++) {
				int length = positions[i + k - 1] - positions[i] + 1;
				book.push_back(length);
			}
		}
	}

	if (book.empty()) {
		cout << -1 << endl;
	}
	else {
		cout << *min_element(book.begin(), book.end()) << " "
			<< *max_element(book.begin(), book.end()) << endl;
	}
}

int main() {
	
	int t;
	cin >> t;

	while (t--) {
		string w;
		int k;

		cin >> w >> k;
		findSubstring(w, k);


	}

	return 0;
}