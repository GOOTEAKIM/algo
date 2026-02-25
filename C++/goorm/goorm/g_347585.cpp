#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> alis;

	alis.push_back(0);
	alis.push_back(1);

	int left = alis[0];
	int right = alis[1];

	while ((left + right) <= n) {

		int now = left + right;

		alis.push_back(now);

		int len = alis.size();

		left = alis[len - 2];
		right = alis[len - 1];

	}

	for (auto next : alis) cout << next << " ";

	return 0;
}