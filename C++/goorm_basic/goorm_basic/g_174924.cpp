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

	int num = *max_element(arr.begin(), arr.end()); // arr에서 가장 큰 값을 기준으로 정한다

	int now = arr[0];

	int total = now;

	for (int i = 1; i < n; i++) {

		int next = arr[i];

		if (next - now == 1) { // 이전 숫자와 1 차이난다면?
			total += next; // 총합 갱신
			now = next; // 이전 숫자 갱신

			if (total > num) {
				num = total; // 최고 점수 갱신
			}
		}

		else { // 이전 숫자보다 1넘게 차이 난다면?
			total = next;
			now = next;
		}

	}

	cout << num;

	return 0;
}