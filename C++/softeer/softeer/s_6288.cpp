#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {

	int W, N;

	cin >> W >> N;
	
	vector<pair<int, int>> books;

	for (int i = 0; i < N; i++) {

		int mi, pi;

		cin >> mi >> pi;

		books.push_back(make_pair(pi, mi));

	}

	sort(books.begin(), books.end(), greater<>());

	int ans = 0;

	while (W > 0) {

		for (auto num : books) {

			int minus = min(W, num.second);
			W -= minus;
			ans += minus * num.first;
		}

	}

	cout << ans << endl;

	return 0;
}