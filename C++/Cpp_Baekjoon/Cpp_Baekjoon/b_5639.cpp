#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


vector<int> arr;

void postorder(int start, int en) {

	if (start >= en) return;

	if (start == en - 1) {
		cout << arr[start] << "\n";
		return;
	}

	int idx = start + 1;

	while (idx < en) {

		if (arr[start] < arr[idx]) break;
		idx++;

	}

	postorder(start + 1, idx);

	postorder(idx, en);
	cout << arr[start] << "\n";

	return;
}

int main() {

	int num;

	while (cin >> num) {
		arr.push_back(num);
	}

	postorder(0, arr.size());

	return 0;
}