#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	while (t--) {

		int n;

		cin >> n;

		vector<pair<int, int>> applicants(n);

		for (int i = 0; i < n; i++) {
			int score, rank;

			cin >> score >> rank;

			applicants[i] = { score,rank };

		}

		sort(applicants.begin(), applicants.end());

		int cnt = 1;

		int best_rank = applicants[0].second;

		for (int i = 1; i < n; i++) {

			if (applicants[i].second < best_rank) {
				cnt++;
				best_rank = applicants[i].second;
			}

		}

		cout << cnt << "\n";

	}


	return 0;
}

/*
1	4
2	3
3	2
4	1
5	5
*/