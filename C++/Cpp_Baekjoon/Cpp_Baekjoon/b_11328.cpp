#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	while (n--) {

		string before, after;

		cin >> before >> after;

		sort(before.begin(), before.end());
		sort(after.begin(), after.end());
		
		if (before == after) cout << "Possible" << "\n";
		else cout << "Impossible" << "\n";

	}
		
	return 0;
}