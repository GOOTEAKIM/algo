#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

struct medals
{
	int id;
	int gold;
	int silver;
	int bronze;
};

bool compare(const medals& a, const medals& b) {

	if (a.gold != b.gold) return a.gold > b.gold;
	if (a.silver != b.silver) return a.silver > b.silver;
	return a.bronze > b.bronze;

}

int main() {

	int n, k;

	cin >> n >> k;

	vector<medals> alis(n);

	for (int i = 0; i < n; i++) {
		
		cin >> alis[i].id >> alis[i].gold >> alis[i].silver >> alis[i].bronze;

	}
	
	sort(alis.begin(), alis.end(), compare);

	int rank = 1;

	vector<int> ranking(n);

	ranking[0] = 1;

	for (int i = 1; i < n; i++) {
		
		// 공동 등수
		if (alis[i].gold == alis[i - 1].gold &&
			alis[i].silver == alis[i - 1].silver &&
			alis[i].bronze == alis[i - 1].bronze) {

			ranking[i] = ranking[i - 1];
		}
		else
		{
			ranking[i] = i + 1;
		}
	}

	for (int i = 0; i < n; i++) {
		if (alis[i].id == k) {
			cout << ranking[i];
		}
	}

	return 0;
}