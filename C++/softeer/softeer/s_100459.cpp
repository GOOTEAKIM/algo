#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {

	int N = arr.size();

	vector<int> dp(N, 1);

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	return *max_element(dp.begin(), dp.end());
}

int solution(vector<int> arr);

int main() {

	int N;

	cin >> N;
	
	vector<int> ans(N);

	for (int i = 0; i < N; i++) {
		cin >> ans[i];
	}

	int result = solution(ans);

	cout << result << endl;

	return 0;
}