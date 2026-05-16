#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {

	return a + b > b + a;

}

int main() {

	int n;

	cin >> n;

	vector<string> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	sort(alis.begin(), alis.end(), cmp);

	if (alis[0] == "0") {

		cout << 0;
		return 0;

	}

	for (auto next : alis) cout << next;

	return 0;
}