#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<pair<int, int>> arr(n);

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		arr[i] = { num,i + 1 };
	}

	sort(arr.rbegin(), arr.rend());

	for (int i = 0; i < 3; i++) {
		cout << arr[i].second << " ";
	}

	return 0;
}