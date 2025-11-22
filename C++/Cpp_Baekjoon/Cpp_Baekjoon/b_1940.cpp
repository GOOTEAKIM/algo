#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

	int n;

	cin >> n;

	int m;

	cin >> m;

	unordered_map<int, int> dict;
	vector<int> alis(n);

	for (int i = 0; i < n; i++) {

		cin >> alis[i];

		dict[alis[i]]++;
	
	}

	int ans = 0;

	for (auto& next : dict) {

		int x = next.first;

		int cnt = m - x;

		if (dict.find(cnt) == dict.end()) continue;

		if (x == cnt) {
			ans += next.second * (next.second - 1);
		}
		else if (x < cnt) {
			ans += next.second * dict[cnt];
		}

	}

	cout << ans;

	return 0;
}