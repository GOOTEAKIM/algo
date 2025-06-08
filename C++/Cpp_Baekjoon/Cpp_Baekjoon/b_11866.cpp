#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	vector<int> arr;

	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}

	vector<int> ans;

	int idx = 0;

	while (!arr.empty()) {

		idx = (idx + k - 1) % arr.size();
		ans.push_back(arr[idx]);
		arr.erase(arr.begin() + idx);

	}
	
	cout << "<";

	for (int i = 0; i < ans.size(); i++) {

		cout << ans[i];
		if (i != ans.size() - 1) cout << ", ";

	}

	cout << ">";

	return 0;
}