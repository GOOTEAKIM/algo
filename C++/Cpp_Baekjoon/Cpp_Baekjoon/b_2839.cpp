#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	if (n % 5 == 0) {
		cout << n / 5;
	}
	else
	{
		int cnt = 0;

		while (n > 0) {
			n -= 3;
			cnt++;

			if (n % 5 == 0) {
				cnt += (n / 5);
				cout << cnt;
				break;
			}
			else if (n == 1 || n == 2) {
				cout << -1;
				break;
			}
			else if (n == 0) {
				cout << cnt;
				break;
			}
		}
	}

	return 0;
}