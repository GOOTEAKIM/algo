#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n + 1);

	vector<long long> prefix(n + 1);

	long long sum = 0;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];

		prefix[i] = prefix[i - 1] + arr[i];

		sum += arr[i] * prefix[i - 1];
	}

	cout << sum;

	return 0;
}

//arr		0	2	-1	3	
//
//
//prefix	0 	2	1	4
//
//ans :  0	-2	3
//
//1