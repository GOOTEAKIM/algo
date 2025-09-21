#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

	unordered_map<int, int> idx;
	unordered_map<int, int> durability;

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		int v, w;

		cin >> v >> w;

		if (!idx.count(v)) {

			idx[v] = i;
			durability[v] = w;

		}
		else {
			if (w > durability[v]) {
				durability[v] = w;
				idx[v] = i;
			}
			else if (w == durability[v]) {

				if (i > idx[v]) {
					idx[v] = i;
				}

			}
		}

	}

	int ans = 0;

	for (auto& p : idx) {
		ans += p.second;
	}

	cout << ans;

	return 0;
}