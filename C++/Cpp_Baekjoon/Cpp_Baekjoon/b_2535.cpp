#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct olympic
{
	int country;
	int student;
	int score;
};

bool cmp(olympic a, olympic b) {
	return a.score > b.score;
}

int main() {

	int n;

	cin >> n;

	vector<olympic> alis(n);

	for (int i = 0; i < n; i++) {

		cin >> alis[i].country >> alis[i].student >> alis[i].score;

	}

	sort(alis.begin(), alis.end(), cmp);

	int medal = 0;

	int cnt[101] = { 0 };

	for (int i = 0; i < n; i++) {

		int c = alis[i].country;

		if (cnt[c] >= 2) continue;

		cout << alis[i].country << " " << alis[i].student << "\n";

		cnt[c]++;

		medal++;

		if (medal == 3) break;
	}

	return 0;
}