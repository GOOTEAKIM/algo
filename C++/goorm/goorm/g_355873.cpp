#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	int cnt = 0, ans = 0;

	bool isCorrect = true;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		if (num == 1) {

			isCorrect = true;
			cnt++;
			ans += cnt;

		}
		else {

			isCorrect = false;
			cnt = 0;

		}
	}

	cout << ans;

	return 0;
}