#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	vector<float> total(m + 1, 0);
	vector<float> cnt(m + 1, 0);

	for (int i = 0; i < n; i++) {

		int subject;
		int score;

		cin >> subject >> score;

		total[subject] += score;
		cnt[subject]++;

	}

	float avg = 0;
	int idx = 0;

	for (int i = 1; i <= m; i++) {

		if ((total[i] / cnt[i]) > avg) {

			avg = (total[i] / cnt[i]);
			idx = i;

		}
		else if ((total[i] / cnt[i]) == avg) {

			if (i < idx) {
				idx = i;
			}

		}
	}

	cout << idx;

	return 0;
}