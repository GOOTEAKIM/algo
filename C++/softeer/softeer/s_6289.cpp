#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	vector<int> arr(n+1);

	for (int i = 1; i <= n; i++) {
		
		cin >> arr[i];

	}

	int ans = 0;

	vector<bool> isBest(n+1, true);

	for (int j = 0; j < m; j++) {

		int a, b;

		cin >> a >> b;

		if (arr[a] > arr[b]) {
			isBest[b] = false;
		}
		else if (arr[a] < arr[b]) {
			isBest[a] = false;
		}
		else
		{
			isBest[b] = false;
			isBest[a] = false;
		}

	}
	
	for (int i = 1; i < isBest.size(); i++) {
		if (isBest[i]) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}