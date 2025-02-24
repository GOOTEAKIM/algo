#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

	long long n;
	
	int m;

	cin >> n >> m;

	vector<long long> arr(n);

	for (long long i = 0; i < n; i++) {

		cin >> arr[i];

	}

	unordered_map<long long, long long> remainder_cnt;

	remainder_cnt[0] = 1;

	long long sum = 0, ans = 0;

	for (long long i = 0; i < n; i++) {

		sum += arr[i];
		long long etc = sum % m;

		ans += remainder_cnt[etc];

		remainder_cnt[etc]++;

	}

	cout << ans;

	return 0;
}

