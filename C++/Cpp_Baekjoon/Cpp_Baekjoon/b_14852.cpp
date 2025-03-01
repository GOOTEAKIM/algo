#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007

using namespace std;

long long arr[1000001];

int main() {

	int n;

	cin >> n;

	arr[0] = 0;
	arr[1] = 2;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] * 3 + 1;
	}

	cout << arr[n];

	return 0;
}