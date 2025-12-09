#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<string> alis(n);

	for (int i = 0; i < n; i++) cin >> alis[i];

	string m;

	cin >> m;

	int ans = 0;

	for (auto next : alis) if (!next.find(m)) ans++;

	cout << ans;

	return 0;
}