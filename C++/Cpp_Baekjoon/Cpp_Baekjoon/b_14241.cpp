#include <iostream>
#include <vector>
#include <algorithm>
#include <string>	

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int ans = 0;

	for (int i = n-1; i > 0; i--) {

		int now = arr[i];

		int next = arr[i - 1];

		ans += (now * next);

		arr[i - 1] = (now + next);
	}
	
	cout << ans;

	return 0;
}