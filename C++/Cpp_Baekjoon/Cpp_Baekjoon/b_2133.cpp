#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[31];

int main() {

	int n;

	cin >> n;

	arr[0] = 1;
	arr[2] = 3;

	for (int i = 4; i <= n; i += 2) {

		arr[i] = arr[i - 2] * 3;

		for (int j = i-4; j >= 0; j -= 2) {
			arr[i] += arr[j] * 2;
		}

	}

	cout << arr[n];

	return 0;
}