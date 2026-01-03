#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> alis(3);

	for (int i = 0; i < 3; i++) cin >> alis[i];

	sort(alis.begin(), alis.end());

	if (alis[2] == alis[0] + alis[1]) cout << "Yes";
	else cout << "No";

	return 0;
}