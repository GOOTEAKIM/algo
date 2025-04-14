#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<string> names(n);

	for (int i = 0; i < n; i++) {
		cin >> names[i];
	}
	
	vector<string> sortedNames = names;

	sort(sortedNames.begin(), sortedNames.end());

	if (names == sortedNames) {
		cout << "INCREASING";
	}
	else
	{
		reverse (sortedNames.begin(), sortedNames.end());

		if (names == sortedNames) {
			cout << "DECREASING";
		}
		else
		{
			cout << "NEITHER";
		}
	}

	return 0;
}