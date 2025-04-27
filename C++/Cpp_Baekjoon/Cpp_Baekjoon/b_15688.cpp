#include <iostream>
#include <queue>
#include <algorithm>
#include<vector>

using namespace std;

int main() {

	// pq보다 sort가 더 빠르더라~

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	//priority_queue<int, vector<int>, greater<int>> pq;

	//for (int i = 0; i < n; i++) {
	//	int num;

	//	cin >> num;

	//	pq.push(num);
	//}

	//while (!pq.empty()) {
	//	cout << pq.top() << "\n";
	//	pq.pop();
	//}

	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int num : arr) {
		cout << num << "\n";
	}

	return 0;
}