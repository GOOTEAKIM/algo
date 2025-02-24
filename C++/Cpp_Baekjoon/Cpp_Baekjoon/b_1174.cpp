#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

vector<long long > arr;

void fun(int target) {

	queue <long long > q;

	arr.push_back(0);

	for (int i = 0; i <= 9; i++) {
		q.push(i);
		arr.push_back(i);
	}

	while (!q.empty()) {

		long long num = q.front();

		int last = num % 10;

		q.pop();

		for (int i = 0; i < last; i++) {
			long long newnum = num * 10 + i;
			q.push(newnum);
			arr.push_back(newnum);
		}

	}

	if (target >= arr.size()) {
		cout << -1;
	}
	else
	{
		cout << arr[target];
	}

}

int main() {

	int n;

	cin >> n;

	fun(n);

	return 0;
}
