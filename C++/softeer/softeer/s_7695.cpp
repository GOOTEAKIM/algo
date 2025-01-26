#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> maps;

	for (int i = 0; i < n; i++) {

		int x, y;

		cin >> x >> y;

		maps.push_back({ y,x });

	}

	sort(maps.begin(), maps.end());

	cout << maps[0].second << " " << maps[0].first << endl;

	return 0;
}