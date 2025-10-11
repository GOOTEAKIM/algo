#include <iostream>
#include <set>

using namespace std;

int main() {

	int n;

	cin >> n;

	set<int> alis;

	for (int i = 0; i < n; i++) {

		int num;

		cin >> num;

		alis.insert(num);

	}

	int len = alis.size();

	for (auto next : alis) {

		cout << next << " ";

	}

	return 0;
}