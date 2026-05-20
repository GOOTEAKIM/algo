#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	set<int, greater<int>> numbers;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		numbers.insert(num);

	}

	for (auto next : numbers) cout << next << " ";

	return 0;
}