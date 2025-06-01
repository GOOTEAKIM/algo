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

	// �����ϴ� ����, �����ϴ� ����, �� 2�� ���� ����

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
		else // ���� ��
		{
			dp_inc[i] = dp_inc[i - 1] + 1;
			dp_dec[i] = dp_dec[i - 1] + 1;
		}

	}

	int ans = max(*max_element(dp_inc.begin(), dp_inc.end()), *max_element(dp_dec.begin(), dp_dec.end()));

	cout << ans;

	return 0;
}