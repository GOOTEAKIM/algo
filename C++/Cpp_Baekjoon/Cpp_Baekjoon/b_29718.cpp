#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<int> arr(m,0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			int num;

			cin >> num;

			arr[j] += num;
		}
	}

	int a;

	cin >> a;

	int window = 0;

	for (int i = 0; i < a; i++) {
		window += arr[i];
	}

	int ans = window;

	for (int i = a; i < m; i++) {

		window += arr[i] - arr[i - a]; // 윈도우 작동

		ans = max(window, ans); // ans에 윈도우랑 ans 중 큰 것 할당
	}

	cout << ans;

	return 0;
}

//4	10	4	12
