#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int u, n;

int arr[100001];

int main() {

	cin >> u >> n;

	vector<pair<string, int>> v;

	arr[0] = 100000;

	for (int i = 0; i < n; i++) {

		string s;

		int p;

		cin >> s >> p;

		arr[p]++;

		v.push_back({ s,p });

	}

	int cnt = 0;

	for (int i = 0; i < 10001; i++) {
		if (arr[i] > 0 && arr[i] < arr[cnt]) {
			cnt = i;
		}
	}

	for (int i = 0; i < n; i++) {

		if (v[i].second == cnt) {
			cout << v[i].first << " " << cnt;
			break;
		}

	}

	return 0;
}