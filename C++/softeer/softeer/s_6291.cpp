#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> dict;

	for (int i = 0; i < n; i++) {

		int s, f;

		cin >> s >> f;

		dict.push_back({f,s});

	}

	sort(dict.begin(), dict.end());

	int start = 0;

	int cnt = 0;
	
	for (auto spec : dict) {

		if (start <= spec.second) {
			
			cnt++;
			start = spec.first;
		}

	}
	
	cout << cnt << endl;

	return 0;
}