#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 증가하는 구간, 감소하는 구간, 총 2개 벡터 생성

	vector<int> dp_inc(n,0);
	vector<int> dp_dec(n, 0);

	dp_inc[0] = 1;
	dp_dec[0] = 1;

	for (int i = 1; i < n; i++) {

		if (arr[i] > arr[i - 1]) {
			dp_inc[i] = dp_inc[i - 1] + 1;
			dp_dec[i] = 1;
		}
		else if(arr[i] < arr[i-1])
		{
			dp_dec[i] = dp_dec[i - 1] + 1;
			dp_inc[i] = 1;
		}
		else // 같을 때
		{
			dp_inc[i] = dp_inc[i - 1] + 1;
			dp_dec[i] = dp_dec[i - 1] + 1;
		}

	}

	int ans = max(*max_element(dp_inc.begin(), dp_inc.end()), *max_element(dp_dec.begin(), dp_dec.end()));

	cout << ans;

	return 0;
}