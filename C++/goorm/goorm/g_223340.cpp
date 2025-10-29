#include <iostream>
#include <vector>

using namespace std;
int main() {

	int n;

	cin >> n;

	vector<char> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	char now;

	cin >> now;

	int cnt = 0;

	for (auto next : arr) {
		if (next == now) cnt++;
	}

	cout << cnt;

	return 0;
}